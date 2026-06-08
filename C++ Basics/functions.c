#include <stdio.h>
/*function syntax
returntype fun_name()
{
    code 
    return 0;
}
*/

//with arguments w/o return value         
void printstar(int n)
{
for(int i=0; i<n;  i++)
{
    printf("%c",'*');
}
}


//with arguments with return value
int sum(int a, int b)
{
    return a+b;
}

//without argument with return value

takenumber()
{
    int r;
    printf("enter the number");
    scanf("%d",&r);
    return r;
}

//w/o argument w/o return value

myname()
{
    printf("my name is idot");
}


// recurrsion problems ko chote chote tukdo mein batta hai aur fun baar baar call hota hai
// in iteration for loop use karke ek hi baar fun ko call karte hai
// those problems which can be solved by recurrsion can be solved by iteration

int factorial(int number)
{
    if (number == 0 || number== 1)
    {

        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
    }
}


int main()
{   
int a,b,c,r;
a=34;
b=6;
c=sum(a,b);
r=takenumber();
printf("the number is %d\n",r);

printf("the sum is %d\n",c);

printstar(8);

printf("what is your name?\n");
myname();

int t;
    printf("enter the num whose factorial you want \n");
    scanf("%d", &t);
    printf("the factorial of %d is %d",t,factorial(t));





    return 0;
}