#include<iostream>
#include<cstdlib> 

using namespace std;

const int n = 2;
void mul(int a1[n][n], int b1[n][n], int c1[n][n]) {
for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
    for(int k = 0; k < n; k++) {
        c1[i][j] += a1[i][k] * b1[k][j];}
}
}
}

void add(int a1[n][n], int b1[n][n]) {
    cout << "Addition of two matrix: " << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
        cout << a1[i][j] + b1[i][j] << " ";
        }
        cout << endl;
    }
}


void display(int a1[n][n]) {
    cout << "Multiplication of two matrix: " << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << a1[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int arr[n][n];
    int arr1[n][n];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            arr1[i][j] = 0;
        }
    }

    //malloc(n * n * sizeof(int)) allocates a contiguous block of memory to store n * n
    // The matrix pointer points to the first element of this block of memory, which behaves like a 1D array.
    int* matrix = (int*) malloc(n * n * sizeof(int));
    

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "Enter element "<< i+1<<j+ 1 << ": ";

            // To access elements in a 2D manner (even though it's stored as 1D), you use an index mapping formula:
            //  in memory, 2D arrays are stored in a row-major order (i.e., row by row).
            cin >> matrix[i * n + j];
        }
    }


    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "Enter element "<<i+1<< j+1<< ": ";
            cin >> arr[i][j];
        }
    }

// This allocates memory for an array of n pointers to an array of integers representing a row of the 2D matrix.

    int** matrix1 = (int**) calloc(n, sizeof(int*));

// For each pointer (matrix1[i]), memory is allocated for an array of n integers (again, n = 2).
// This loop creates n rows, each of which is dynamically allocated.
//matrix1 = [ ptr1, ptr2 ]    // Array of pointers
//ptr1 -> [ 1, 2 ]            // Row 1
//ptr2 -> [ 3, 4 ]            // Row 2
    for(int i = 0; i < n; i++) {
        matrix1[i] = (int*) calloc(n, sizeof(int));
    }


    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "Enter element " << i + 1 << j + 1 << ": ";
            cin >> matrix1[i][j];
        }
    }

mul(arr, arr, arr1); 
add(arr, arr); 
display(arr1);


for(int i = 0; i < n; i++) {
free(matrix1[i]);}
free(matrix1);
free(matrix);
return 0;
}

/*
Enter element 11: 2
Enter element 12: 3
Enter element 21: 4
Enter element 22: 4
Enter element 11: 5
Enter element 12: 6
Enter element 21: 6
Enter element 22: 7
Enter element for matrix1 a11: 8
Enter element for matrix1 a12: 8
Enter element for matrix1 a21: 9
Enter element for matrix1 a22: 7
Addition of two matrix:
10 12
12 14
Multiplication of two matrix:
61 72
72 85
*/