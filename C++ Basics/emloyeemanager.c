    // Employee Id can be of any length and it can contain any character
    // For 3 employees, you have to take 'length of employee id' as input in a length integer variable.
    // Then, you have to take employee id as an input and display it on screen. 
    // Store the employee id in a character array which is allocated dynamically.
    // You have to create only one character array dynamically


#include <stdio.h>
#include <string.h>
#include <stdlib.h> //for dynamic memory allocation
int main()
{
    char *ptr;

    for (int i = 1; i <=3; i++)
    {
    int n;
    printf("enter no of characters in  %dth employee id \n",i);
    scanf("%d", &n);
    
    ptr = (char *)malloc((n+1)* sizeof(char));
    printf("enter the employee %d id\n",i);
    scanf("%s",ptr);
    free(ptr);
    }
    for (int i = 1; i <=3; i++)
    {
        printf("the employee id of person %d is %s\n", i,ptr);
    }

//use getchar as enter is a valid input for scanf so it wont ask for value of a or b
//getchar takes that input 

/*
    int chars, i = 0;
    char a, b;
    char *ptr;
    while (i < 3)
    {
        printf("Employee %d: Enter the number of characters in your Employee Id\n", i+1);
        scanf("%d", &chars);
        getchar();
        printf("Enter the value of a\n");
        scanf("%c", &a);
        getchar();
        printf("Enter the value of b\n");
        scanf("%c", &b);
        ptr = (char *) malloc((chars+1)*sizeof(char));
        printf("Enter your Employee Id\n");
        scanf("%s", ptr);
        printf("Your Employee Id is %s\n",ptr );
        free(ptr);
        i = i + 1;
    }

    return 0;
}
*/



    return 0;
}

//Immediate Printing and Freeing Memory:
// Memory Usage: Only the memory for the current ID is allocated at any given time.
// Storing All IDs and Printing Together:
// Memory Usage: Memory for all IDs is allocated and held until all IDs are printed.
// Example: If you store three IDs, you need memory for all three IDs simultaneously until you print and free them.
// Example: If you input an ID, print it, and then free the memory before moving to the next ID, you only need memory for one ID at a time.