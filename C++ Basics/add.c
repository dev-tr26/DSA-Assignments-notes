#include<stdio.h>
#include<string.h>
#include<stdlib.h> //for dynamic memory allocation
#include<math.h>  //perform the arithmetic operations
int main()
{
    // int n;
    // printf("enter the num upto which you want sum");
    // scanf("%d",&n);
    // int sum=0;
    // for (int i = 0; i < n; i++)
    // {
    //     sum=sum+i;
    // }
    // printf("%d",sum);

    int n;
    printf("enter the number of elements of array");
    scanf("%d",&n);
    int arr[n];

    printf("enter the elements of array");
    for (int i = 0; i <n; i++)
    {
        scanf("%d",&arr[i]);  //& operator is used to get the address of a variable. When you use scanf to read input into an array, you need to provide the address of the array element where the input should be stored.
    }
    
    // printf("elements of array are:");
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d\n",arr[i]);
    // }
    

    for (int i = 0; i <n; i++)
    {
        if (arr[i]=='34')
        {
            return i;
        }   
    }
    return -1;
}
//If arr is an array of integers, arr[i] is the i-th integer in the array. To store a value in arr[i], scanf needs to know where arr[i] is located in memory, which is what &arr[i] provides