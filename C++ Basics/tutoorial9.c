#include <stdio.h>
#define PI 3.14
int main()
{

/*this is a muiltiline comment

format specifier is the way to tell compiler which type of data is in variable

this is ignored by the compiler*/
int a=8;
int d;
float b=7.345;
printf("the value of a is %d and \n the value of b is %.4f\n",a,b);//this will print 4 digits after decimal
printf("the value of a is %d and \n the value of b is %8.4f\n",a,b);//this will print 4 digits after decimal with total 8 space(space before decimal)
printf("the value of a is %d and \n the value of b is %-8.4f\n",a,b);
//float PI=7.33;
//cannot do this pi is constant
printf("%f\n",PI);

//const d=4;
d=3.4;
//caanot do this d is constant
printf("\a");

return 0;

//%d integer, %c character, %f float,%l long, %lf double, %LF long double
// /t tab,/b backspace, /n newline, \a alarm or beep, /'single quote,/"double quote, // backslash

}