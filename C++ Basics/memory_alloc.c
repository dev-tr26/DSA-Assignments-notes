#include <stdio.h>
#include <string.h>
#include <stdlib.h> //for dynamic memory allocation

//used to allocate memory at runtime






int main()
{
    // use of malloc
    //malloc function returns a void pointer pointing to memory that has been allocateed but not yet typed
    //This casting is necessary because malloc does not know the type of data that will be stored in the allocated memory. The void pointer is a way for malloc to return a memory address that is not yet associated with a particular data type.

    int n;
    printf("enter the size of array you want\n");
    scanf("%d", &n);

    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));
    //using calloc 
    //ptr= (int *)calloc(n,  sizeof(int)); only this much change


//    check if allocated memory is full

//    if (ptr==NULL)
//    {
//        printf("memory allocated is full");
//        exit(0);
//    }
    


    for (int i = 0; i < n; i++)
    {
        printf("enter the value no %d of this array\n", i);
        scanf("%d", &ptr[i]); // ptr[i] is *ptr+i value at pointer+i
    }


    printf("The array elements are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Element %d: %d\n", i, ptr[i]);
        // printf(" the value at %d of this array is %d\n", i, ptr[i]);
    }


//use of realloc

    printf("enter the new size of array you want\n");
    scanf("%d", &n);

    ptr= (int*)realloc(ptr, n*sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("enter the new value numbers %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }

    printf("The array elements are:\n");
    for (int i = 0; i < n; i++)
    {
        printf(" the value at %d of this array is %d\n", i, ptr[i]);
    }
    return 0;
}