#include<stdio.h>
#include<string.h>

    //scope region of program where defined variables cannot be accessed
    //static variables preserve their values even when they go out of scope
    //preserve value from previous fun and not initialised again
    //static variable remains in memory throughout the program
    //if static var not initialised , it is 0 automatically
    //in c static var can only initialized using constant literals koi fun nahi chalega as it has to do memory allocation 
    //that's coz static var ka initialization main ke run hone se pehle hota hai

int b=34;  //#global variable  
int func1(int b){           //aa avdo b change karsu to main vada b ne affect nai kare 
    printf("the address of b is %d\n",&b);
    printf("the value of b inside func1 is %d\n",b);
    return b*10;
}

int func2(int b1){
    printf("the value of b in func2 is %d\n",b);   //its 34 as it is global var
    return b1*10;
}


int func3(int b1){
static int variable=0;
printf("The value of variable is %d\n",variable);
variable++;
return b1 + variable;
}


int main()
{
    int b=344;
    int val= func1(b);
    int* ptr = &val;
    printf("the value of func1 is %d\n",val);
    printf("the address of b inside main is %d\n",&b);
    func2(b);

    int val_2= func3(b);
    val_2= func3(b);
    val_2= func3(b);
    //printf("the value of func3 is %d\n",val_2);


    
    return 0;
}
// func2 does return b1 * 10. However, in the main function, the return value of func2 is not captured or used.     
//To utilize the return value, you should store it in a variable and print it or use it in some way.
//whenever we call a function actual parameters arguments values are copied 

void incrementAndPrint() {
    static int count = 0; // static variable
    count++;
    printf("%d\n", count);
}

int main() {
    incrementAndPrint(); // Output: 1
    incrementAndPrint(); // Output: 2
    incrementAndPrint(); // Output: 3
    return 0;
}
//Value Retention: Each time the incrementAndPrint function is called, the value of count is incremented by 1 and printed. The key point is that count retains its value between function calls.

//So, when incrementAndPrint is called multiple times:

//The first call initializes count to 0, increments it to 1, and prints 1.
//The second call retains the value 1, increments it to 2, and prints 2.
//This behavior is different from a non-static local variable, which would be re-initialized to 0 each time the function is called, resulting in the output always being 1