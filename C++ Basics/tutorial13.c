#include<stdio.h>
int main()
{
    /* 1st expression is initialisation and can intitialise more than 1 variables
    and expression 1 is optitional that is if already initialised */
    int i;
    for(i=0; i<6 ; i++)
    {
        printf("%d",i);
    }

    int j,k;
    for(j=0,k=0;j<9; j++)
    {
        printf("%d  %d\n",j,k);
    }
    

//in condition expression game tetli statment lakho a badha ne execute karse but last condition ne j terminating condition manse
    int a,b;
    for(a=0,b=0;a<4,b<9; a++)
    {
        printf("%d %d\n",a,b);
        b++;
    }


//to print sum of 1st n natural numbers

int n;
printf("enter the number");
scanf("%d",&n);

int sum;
sum=0;
for (int i=0 ;i<=n;i++)
{
    sum=sum+i;
}
printf("the sum of 1st n natural number is:%d",sum);


//to print numbers in reverse order

for(int i=n;i>=0;i--) 
{
    printf("%d\n",i);
}

//we can initialise as well as update the loop variable in expression 2 itself
//we can pass 0 or non zero values in it any non zero value is true and zero value is false by default

//expression 3 is used to update loop variable more than one also to terminate

return 0;    
}