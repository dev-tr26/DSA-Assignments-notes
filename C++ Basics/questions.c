#include <stdio.h>
int main()
{
//make a simple calculator

    char operation;
    double a,b;
    printf("enter the numbers a and b");
    scanf("%lf",&a);
    scanf("%lf",&b);
    printf("enter the operation"(+,-,*,/));
    scanf("%c",&operation);

    switch(operation){
        case('+'):
            printf("the addition of a and b is%lf",a+b);
            break;
        case('-'):
            printf("the subtraction of two numbers is%lf",a-b);
            break;
        case('*'):
            printf("the muiltiplication of two numbers is%lf",a*b);
            break;
        case('/'):  
            printf("the division of two numbers is%lf",a/b);
            break;
        default:
            printf("error !! the operator doesn't match");    
    }

//to count number of digits in a number

long long a;
int count;
printf("enter the number");
scanf("%lld", &a);
count=0;
do{
    a/=10;
    count++;
}while(a!=0);

printf("the number of digits in no is%d",count);

// iterate at least once, then until n becomes 0
// remove last digit from n in each iteration
// increase count by 1 in each iteration



//unit conversion code


float kms, inch, miles, foot, pound, kg, meters, cms;
    int unit;
    printf("enter 1 for kms to miles\n 3 for kgs to pounds\n 2 for meters to foot\n 4 for cms to inches\n");
    scanf("%d", &unit);

    switch (unit)
    {
    case 1:
        printf("enter no of kilos");
        scanf("%f", &kg);
        printf("%f kilos is %f pounds", kg, kg * 2.2046);
        break;

    case 2:
        printf("enter no of meters");
        scanf("%f", &meters);
        printf("%f meters is %f", meters, meters * 3.280);
        break;

    case 3:
        printf("enter no of kilometers");
        scanf("%f", &kms);
        printf("%f kilometers is %f miles", kms, kms * 0.621370);
        break;

    case 4:
        printf("enter no of centimeters");
        scanf("%f", &cms);
        printf("%f centemeters is %f inches", cms, cms * 2.54);
        break;
    }



//muiltiplication table by for loop
int num;
printf("enter the num you want muiltiplication table of\n");
scanf("%d",&num);
printf("the muiltiplication table of %d is as follows:\n",num);

for(int i=0;i<11;i++)
{
    printf("%d x %d= %d\n",num,i,num*i);
}



//fibonacci seq by reccursion

int fib_recursive(int n)
    {
        if (n == 1 || n == 2)
        {
            return n;
        }
        else
        {
            return fib_recursive(n - 1) + fib_recursive(n - 2);
        }
    }

    

int n,c;
    printf("enter the number till which fibonacci series you want");
    scanf("%d",&n);
    c=fib_recursive(n);
    printf("%d",c);

//fibonacci num by iterative approach

    int fib_iterative(int t)
{

    int g = 0;
    int h = 1;
    for (int i = 0; i < t - 1; i++)
    {
        h = g + h;
        g = (g + h) - g;
    }
    return h;
}    
    int t;
    printf("enter the index of fib num", t);
    scanf("%d", &t);
    printf("the fib num is %d", fib_iterative(t));

//here iterative approach is better in terms of time complexity



//different star pattern

//pyramid 1
for (int i = 0; i < 5; i++)
{   
    for (int j = 0; j < 5-i; j++)
    {
        printf(" ");
    }
    for (int j = 0; j < i+1; j++)
    {
        printf("* ");
    }
    printf("\n ");
    
    
}

//right triangle

for (int i = 0; i <6; i++)
{
    for ( int j = 0; j <i+1; j++)
    {
        printf("* ");
    }
    printf("\n");
}

//left triangle

for (int i = 1; i <=5; i++)
{
    for (int j = 1; j<=5-i; j++)
    {
        printf(" ");
    }
    for (int j = 1; j <=i; j++)
    {
        printf("%d",i);
    }
    printf("\n");
}

//pyramid

    for (int i = 1; i <=5; i++)
{
    for (int j = 1; j<=5-i; j++)
    {
        printf(" ");
    }
    for (int j = 1; j <=i; j++)
    {
        printf("* ");
    }
    printf("\n");
}

//reverse pyramid

    for (int i = 0; i <5; i++)
    {
        for (int j = 0; j <i+1; j++)
        {
            printf(" ");
        }
        for (int j = 0; j <5-i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

//diamond pattern

for (int i = 0; i <4 ; i++)
    {
        for (int j = 1; j <=4-i  ; j++)
        {
            printf(" ");
        }
        for (int j =1; j <=i+1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int  i = 0; i < 4; i++)
    {
        for (int j = 1; j <=i+1 ; j++)
        {
            printf(" ");
        }
        for (int j = 0; j <(4-i) ; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

//line wise numbers

for (int i = 0; i < 5; i++)
{
    for (int j = 0; j <5; j++)
    {
        printf("%d",i);
    }
    printf("\n");

//line wise 01234

for (int i = 0; i < 5; i++)
{
    for (int j = 0; j <5; j++)
    {
        printf("%d",j);
    }
    printf("\n");

}

//linewise num using array
int alphabet[]={1,2,3,4,5};
for (int i = 0; i <5; i++)
{
    for (int j = 0; j <5; j++)
    {
        printf("%d ",alphabet[j]);
    }
    printf("\n");
}

//linewise reverse num

for (int i = 0; i < 5; i++)
{
    for (int j = 5; j>0; j--)
    {
        printf("%d",j);
    }
    printf("\n");

}

//linewise square
for (int i = 1; i <=5; i++)
{
    for (int j = 1; j <=5; j++)
    {
        printf("%d ",j*j);
    }
    printf("\n");
}

//linewise square alphabet
char alphabet[]={"abcde"};
for (int i = 0; i <5; i++)
{
    for (int j = 0; j <5; j++)
    {
        printf("%c ",alphabet[j]);
    }
    printf("\n");
}

//for horizontal
char alphabet[]={"abcde"};
for (int i = 0; i <5; i++)
{
    for (int j = 0; j <5; j++)
    {
        printf("%c ",alphabet[i]);
    }
    printf("\n");

//open diamond aquare

    for (int i = 0; i < 4; i++)       //upper part
    {
        for (int j = 1; j <= 4 - i; j++)
        {
            printf("* ");
        }
        for (int j = 1; j < (2 * i) + 1; j++)
        {
            printf("  ");
        }
        for (int j = 0; j < 4 - i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for (int i = 0; i < 4; i++)           //lower part
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("* ");
        }
        for (int j = 0; j < 6 - (2 * i); j++)
        {
            printf("  ");
        }
        for (int j = 0; j < i + 1; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

//butterfly pattern

    for (int i = 0; i <4; i++)
    {
        for (int j = 1; j <=i+1; j++)
        {
            printf("* ");
        }
        for (int j = 1; j <=6-(2*i); j++)
        {
            printf("  ");
        }
        for (int j = 1; j <=i+1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = 0; i <3; i++)
    {
        for (int j = 1; j <=4-i-1; j++)
        {
            printf("* ");
        }
        for (int j = 1; j <=(2*i)+2; j++)
        {
            printf("  ");
        }
        for (int j = 1; j<4-i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

//hollow square

    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            if (i > 0 && i < 6 && j > 0 && j < 6) {
                printf("  "); 
            } else {
                printf("%d ", 4);
            }
        }
        printf("\n");
    }



//print right triangle for 1 and reverse for 2

    int a;
    printf("enter 1 for pyramid pattern 2 for reverse");
    scanf("%d", &a);
    if (a == 1)
    {
        for (int i = 0; i < 5; i++)
        {
            printf(" \n");
            for (int j = 0; j < i + 1; j++)
            {
                printf("* ");
            }
        }
    }
    if (a == 2)
    {
        for (int i = 0; i < 5; i++)
        {
            printf(" \n");
            for (int j = 0; j < 5 - i; j++)
            {
                printf(" *");
            }
        }
    }
    return 0;
}
}


//array reversal
/*
void arrayrev(int array[],int length){

    int temp;
    for (int i = 0; i < length/2; i++)
    {
        temp=array[i];
        array[i]=array[length-i-1];
        array[length-i-1]=temp;
    }
}

void print_array(int array[],int length){
    
    for (int i = 0; i < length; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}


int main()
{
    int array[]={1,2,4,5,77,32,11};
    int length= sizeof(array)/ sizeof(array[0]);

    printf("array before rev\n");
    print_array(array,length);

    arrayrev(array,length);

    printf("array after rev\n");
    print_array(array,length);

    return 0;
}
*/

/*
//string alter program


#include <stdio.h>
#include <string.h>

// The char* parameter allows the function to modify the original string directly. #call by refrence
// string = array of char
// A pointer can be used to iterate over the array,
void parser(char *string)
{
    int in = 0; // var to track inside
    int index = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == '<')
        {
            in = 1;
            continue;
        }
        else if (string[i] == '>')
        {
            in = 0;
            continue;
        }
        if (in == 0)
        {
            string[index] = string[i];
            index++;
        }
    }
    string[index] = '\0';

// remove spaces

while(string[0] == ' ')
{
    for (int i = 0; i < strlen(string); i++)
    {
        string[i] = string[i + 1];
    }
}

//remove spaces from behind
while (string[strlen(string) - 1] == ' ')
{
    string[strlen(string) - 1] = '\0';
}
}


int main()
{
    char string[] = "<h1>   this is a heading   </h1>";
    parser(string);
    printf("the parsed string is ~~%s~~", string);
    return 0;
}
*/

return 0;
}
