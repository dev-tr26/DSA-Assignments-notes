#include <stdio.h>
// pointers

// stores address of another var, declared using *
// can be of type char,int,array,fun or any other pointer
// size depends on architecture ex. 2 bytes for 32 bit
//  p points to a eg. int a=5 int *ptr=&a;
//  & operator returns address of the variable
//  * is deference operator or indirection operator used to get value at a given address
//  %x to print hexadecimal num and %p pointer ko printf se print karvane ka format specifier hai
//  note that data type of ptr and var must be same
int main()
{
    int a = 44;
    int *ptrb = &a;
    printf("the address of pointer to a is %p\n", &ptrb);
    printf("the value of a is %d\n", *ptrb);
    printf("the value of a is %d\n", a); // write %x for hexadecimal
    printf("the address of a is %p\n", &a);
    printf("the address of a is %p\n", ptrb); // same as above coz ptr stores address of a

    // null pointer is not assigned any value but null
    // it does not point to fun or any obj
    // used to initialize  pointer variable mein jab koi value nahi hai
    // pointer var isnt assigned any valid memory location

    int *ptr2 = NULL;

    // USE dynamic memory location ,linked list making, return muiltiple values from a fun

    // pointer arithmetic

    int d = 23;
    int *ptre = &d;
    printf("%d\n", ptre);     // prints address of a
    printf("%d\n", ptre + 1); // prints address+ size(var) as here int takes 4 bytes
    char b = '4';
    char *ptra = &b;
    printf("%d\n", ptra);
    printf("%d\n", ptra + 1); // char takes 1 byte and same for - operation
    printf("value of b is %p\n", *ptra + 1);

    int c = 2;
    int *ptrc = &c;
    ptrc++; // same for -- ope
    printf("%d\n", ptrc);

    // array pointer

    int array[] = {1, 3, 33, 45, 66, 75, 867, 86};
    int *ptr = &array;
    printf("the address of 1st element of array is %d\n", array); // or print &array[0] same thing
    printf("the address of 1st element of array is %d\n", &array[0]);
    printf("%d\n", &ptr); // it will print add of pointer to array
    printf("the address of 2nd element of array is %d\n", &array[1]);
    printf("the address of 2nd element of array is %d\n", array + 1); // 2nd way of printing add of 2nd element

    //array +1 kari tyare size of array add thay
    // array+1 print karo k &array[1] kari ekaj thai as array+1 a size of var che and memory ma 2nd element nu add etluj hoi

    printf("the value of  of 1st element of array is %d\n", *(array));
    printf("the value of 1st element of array is %d\n", *(&array[0]));
    printf("the value of 2nd element of array is %d\n", *(&array[1])); // derefrence kairu array[1]ne
    printf("the value of 2nd element of array is %d\n", array[1]);     // normal way
    printf("the value of 2nd element of array is %d\n", *(array + 1)); // derefrence kairu array+1 ne
    printf("the value of 3rd element of array is %d\n,", *(&array + 2));
    printf("the value of 3rd element of array is %d\n,", *(&array - 2));

    // call by refrence

    
    void swap(int *x, int *y)
    {

        int temp;
        temp = *x; // save value at add a
        *x = *y;   // change y to x
        temp = *y; // change x to y
        return;
    }

    int main()
    {
        int a = 33, b = 55;
        printf("%d and %d\n", a, b);
        swap(&a,&b);
        printf("%d and %d\n", a, b);

        return 0;
    }
    

    // example call by refrence

    
    void call_by_refrence(int *a, int *b)
    {
        int c;
        c = *a;
        *a = *a + *b;
        *b=(c-*b);
        return;
    }

    int main()
    {
        int x = 3, y = 2;
        printf("%d and %d\n", x, y);
        call_by_refrence(&x, &y);
        printf("after running fun values of x and y is %d and %d\n", x, y);

        */

    // call by value

    
    void swap(int x, int y)
    {
    int temp;
    temp=x;
    x=y;
    y=temp;
    }
    void main()
    {
    int r=10, v=20;
    swap(r, v);  // passing value to function
    printf("\nValue of r: %d",r);
    printf("\nValue of v: %d",v);

    return 0;
    }
    

    // passing an array in function

    // 1. by Declaring Function with array as a parameter

    

    int sum(int arr[]) {
    int sum_of_array=0;
    for (int i = 0; i<4; ++i) {
    sum_of_array += arr[i];
    }
    return sum_of_array;
    }

    int main() {
    int result, array[] = {23,33,44,55};
    result = sum(array);
    printf("Result = %d", result);
    return 0;
    }




    //2. by passing the base address of array to func

    //this is an ex of call by refrence

    int func1(int array[])
    {
        for (int i = 0; i < 5; i++)
        {
            printf("the value %d is %d\n", i, array[i]);
        }
        return 0;
        //array[0] = 455         //it will print 455 as yaha par pointer mein change ho jate hai
        // if array value is changed in fun it will change in main also
    }

    void func2(int* pointer){
        for (int i = 0; i < 5; i++)
        {
            //printf("the value %d is %d\n", i,pointer[i]);
            printf("the value %d is %d\n", i,*(pointer+i));
            *(pointer+2)=9999;
        }



    }





    int main()
    {
        int arr[] = {1, 3, 4, 5, 6};
        printf("the value at index zero is %d\n", arr[0]);
        func1(arr);
        printf("the value at index zero is %d\n", arr[0]);      //see above comment
        func2(arr);
        printf(arr);

        return 0;
    }

    

//void pointer
//pointer with no data type associated with it
//it can be easily typecasted into any other type

int x=10;
char y='x';

void*p =&x;
p= &y;

//in dynamic memory allocation return type pointer is void*
//when we ask for memory in heap dynamically it can be used to typecast into any other typeif needed
//not possible to derefrence void pointers *ptr
//ptr arithmetic not allowed with void pointers

#include <stdio.h>
int main()
{
    int a = 345;
    float b = 8.3;
    void *ptr;
    ptr = &b;
    printf("The value of b is %f\n", *((float *)ptr));
    ptr = &a;
    printf("The value of a is %d\n", *((int *)ptr));
    return 0;
}




//null,void,unassigned pointer



int main()
{
   int a=34;
   int* ptr= &a;
   printf("the address of a is %d\n",ptr);   //it gives the address of a
    
   int *ptr =NULL;
 printf("the value of a is %d\n",ptr);   // it will give 0
    
   int* ptr= &a;    
   printf("the value of a is %d\n",*ptr);  //it will give 34

   int *ptr =NULL;
   printf("the value of a is %d\n",*ptr);  //compiler will get crash

//check system:

if (ptr !=NULL)
{
    printf("the value of a is:%d\n",*ptr); 
}
else
{
    printf("the ptr is a null pointer and cannot be derefrenced\n");
}

//unintialised pointer

int*ptr;
int c=34;

printf("address of c is%d\n", )

    return 0;
}

}
    return 0;
}


