#include<stdio.h>
#include<string.h>
int main()              
{
// arrays
    // collection of items(also store derived data types like pointers ,structures etc.) of same data type
    // stored in contigous memory location
    // 1d array list/vector & 2d array matrix
    // in c lang no limit in dimension of array
    // array size cannot change so wastage of memory , each element of an array is of same size
    // Array provides random access using the element index.

    data_type[size];
    data_type name[size]={x,z,c,...}      //size not required in this case
    data_type arr_name [row][column];    // 2D array

    //3d array

//    data_type arr_name[Index of 2D array][ Index of that 2D array row][Index of that 2D array column];   
//                [Number of 2D arrays.] [Number of rows in each 2D array.] [Number of columns in each 2D array.]
    

// int arr[12] fixed size 
// int arr[n]  dynamic size determined at run time
// int*arr= new int[n]   dynamic size determined at run time
// vector <int> arr; completely dynamic   you can add /remove and its size adjusts


    int marks[10];
    marks[0] = 233;
    marks[1] = 311;
    marks[2] = 204;
    marks[3] = 211;
    printf("the marks of student 1 is %d\n", marks[0]);

    for (int i = 0; i < 11; i++)
    {
        printf("enter the value of %d element  of array\n", i);
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < 11; i++)
    {
        printf("the value of %d elemnt of array is %d\n", i, marks[i]);
        
    }

    
    int scores[]={4,2,8,6,9,7};
    printf("%d",scores[0]);


    int numbers[3][3]={{2,4,6},{3,7,9}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j<3; j++)
        {
           //  printf("the value of %d ,%d element of matrix is %d\n",i,j,numbers[i][j]);
            printf("%d ",numbers[i][j]);
        }
            printf("\n");
    }

    //print length of array 

    int arrr[]={1,3,5,7,8};
    printf("%d",sizeof(arrr)/sizeof(arrr[0]));

//disadvantages of array
//poor time complexity of insertion and deletion operation 
//not possible to increase size once array is declared

int credits[3][3][1]={{1,3,5}
                    ,{2,4,6}
                    ,{7,9,8}};
    for (int i = 0; i < 3; i++)
    {   printf("\n");
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k <1; k++)
            {
                printf(" %d",credits[i][j][k]);
            }
        }
    }
    

int dates[4][3][1]={{1,2,3},{2,3,4},{3,5,7},{5,7,9}};
for (int i = 0; i <4; i++)
{printf("\n");
        for (int j = 0;  j<3; j++)
        {
            for (int k = 0; k <1; k++)
            {
                printf(" %d",dates[i][j][k]);
            }
            
        }
        
    }

int arr[5]={1,3  };
for (int i = 0; i <4; i++)
{
    printf("%d",arr[i]);
}
    return 0;
}
