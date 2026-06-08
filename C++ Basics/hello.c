#include<stdio.h>

int main()
{
// float a,b;
// int c;
// printf("enter the value of c");
// scanf("%d",&c);
// a=34;
// b=7.34;
// printf("%f \n",a+b);
// printf("%f \n",a/b);
// printf("%f \n",a*b);
// printf("%f \n",a-b);
// printf("%f \n",c+a);

// int t,r
// printf("enter a number t\n");
// scanf("%d",&t);

// printf("enter a number r\n");
// scanf("%d",&r);

// printf("the difference of numbers is %d",t-r);
for (int  i = 0; i < 4; i++)
    {
        for (int j = 0; j <i+1 ; j++)
        {
            printf(" ");
        }
        for (int j = 0; j <3-i ; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
return 0; 
}


