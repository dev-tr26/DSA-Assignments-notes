#include <stdio.h>
#include <string.h>
#include <stdlib.h> // dynamic memory allocation ma te
#include <math.h>   //perform the arithmetic operations

// array reverse program


void reverse_arr(int arr[], int size)          //ahiya parameter " arr[]" hoi  not "arr[a]"
{
    printf("Reversed array :\n");
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d, ", arr[i]);
    }
}

int main()
{
    int a;
    printf("enter the length of array");
    scanf("%d",&a);

    int arr[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }

    reverse_arr(arr,a);

    return 0;
} 

// sum of elements of array


void array_sum(int arr[], int size)
{

    int sum;
    for (int i = 0; i < size; i++)   //ahiya i<size as parameter int size che
    {
        sum+= arr[i];
    }
    printf("sum of elemnts of array: %d", sum);
}

int main()
{
    int a;
    printf("enter the length of array");
    scanf("%d", &a);

    int arr[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }

    array_sum(arr, a);
    return 0;
}



// good pairs

// good_pairs(int arr[],int size){

//     for (int i = 0; i <size; i++)
//     {
//         for (int j = 0; j <size; j++)  
//         {
//             if (arr[i]==arr[j] && i<j)
//             {
//                 printf("(%d,%d)",i,j);
//             }   
//         }   
//     }
// }

// int main(){

//     int a;
//     printf("enter the length of array");
//     scanf("%d", &a);

//     int arr[a];
//     for (int i = 0; i <a; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
    
//     good_pairs(arr,a);
//     return 0;
// }


//copy elements of one array to other

// void copyarray(int source[],int destination[],int size[]){

//     for (int i = 0; i < size; i++)
//     {
//         destination[i]=source[i];
//     }
    
// }

// int main(){
//     int source[]={1,4,5,6,3};
//     int size=sizeof(source)/sizeof(source[0]);
//     int destination[size];

//     copyarray(source,destination,size);


//     printf("source array :\n");
//     for (int i = 0; i<size; i++)
//     {
//         printf("%d, ",source[i]);
//     }
    
//     printf("\n");
//     printf("destination array :\n");
//     for (int i = 0; i<size; i++)
//     {
//         printf("%d, ",destination[i]);
//     }
//     return 0;
// }


//duplicate numbers

// void duplicate_num(int arr[], int size, int* count){

//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i]==i)
//         {
//             (*count)++;
//         }
//     }
// }
// int main(){
//     int count=0;
//     int arr[]={1,5,2,0,4,8,6};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     duplicate_num(arr,size,&count);
//     printf("%d",count);
//     return 0;
// }
