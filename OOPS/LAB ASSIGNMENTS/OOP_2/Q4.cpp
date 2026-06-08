#include<iostream>
using namespace std;

class Matrix{
    int row,col;  
    int** matrix;
public:

Matrix(int r,int c){
    row =r;
    col=c;
    matrix=new int*[row];
    for (int i = 0; i <row; i++)
    {
        matrix[i] = new int[col];
    }
}

Matrix(Matrix &obj) {
        row = obj.row;
        col = obj.col;
        matrix=new int*[row];
    for (int i = 0; i <row; i++)
    {
        matrix[i] = new int[col];
        for (int j = 0; j <col; j++)
        {
            matrix[i][j]=obj.matrix[i][j];
        }
        
    }
}

void setdata(){
    for (int i = 0; i <row; i++)
    {
        for (int j = 0; j <col; j++)
        {
            cout<<"enter elements"<<endl;
            cin>>matrix[i][j];
        }
    }
}

Matrix add(Matrix m){
    Matrix m1(2,2);
    for (int i = 0; i <row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            m1.matrix[i][j] = matrix[i][j] + m.matrix[i][j]; 
        }
    }
    return m1;
}

Matrix sub(Matrix m){
    Matrix m1(2,2);
    for (int i = 0; i <row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            m1.matrix[i][j] = matrix[i][j] - m.matrix[i][j]; 
        }
    }
    return m1;
}

Matrix mul(Matrix m){
    Matrix m1(2,2);
    for (int i = 0; i <row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            m1.matrix[i][j] = matrix[i][j] * m.matrix[i][j]; 
        }
    }
    return m1;
}

void getdata(){
    for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
        cout << matrix[i][j] << " ";
        }
        cout<<endl;
    }
    }
};

int main()
{
    Matrix m1(2,2),m2(2,2),m3(2,2),m4(2,2);
    cout<<"matrix 1"<<endl;
    m1.setdata();
    m1.getdata();
    m2.setdata();

    cout<<"matrix addition"<<endl;
    m4=m1.add(m2);
    m4.getdata();

    cout<<"matrix sub"<<endl;
    m4=m1.sub(m2);
    m4.getdata();

    cout<<"matrix mul"<<endl;
    m4=m1.mul(m2);
    m4.getdata();
    return 0;
}
/*
enter elements
1
enter elements
2
enter elements
3
enter elements
4
1 2
3 4
enter elements
5
enter elements
6
enter elements
7
enter elements
8
6 8
10 12
-4 -4
-4 -4
5 12
21 32
PS C:\Users\trang\Programing\c tutorial code with harry\LAB ASSIGNMENTS\OOP_2> cd "c:\Users\trang\Programing\c tutorial code with harry\LAB ASSIGNMENTS\OOP_2\" ; if ($?) { g++ Q4.cpp -o Q4 } ; if ($?) { .\Q4 }
matrix 1
enter elements
1
enter elements
1
enter elements
1
enter elements
1
1 1
1 1
enter elements
1
enter elements
1
enter elements
1
enter elements
1
matrix addition
2 2
2 2
matrix sub
0 0
0 0
matrix mul
1 1
1 1
*/