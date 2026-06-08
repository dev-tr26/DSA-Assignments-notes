#include<iostream>
using namespace std;

void add(int arr[3][3]){
cout<<"enter arr element"<<endl;
for (int i=0;i <3; i++)
{
for (int j=0;j <3; j++){
cin>>arr[i][j];}
cout<<endl;}
}

void display(int arr[3][3]){
for (int i=0;i<3;i++)
{
for(int j=0;j<3;j++){
cout<<arr[i][j]<<" ";
}cout<<endl;
}
}

void transpose(int arr[3][3],int transarr[3][3]){
for (int i=0;i<3;i++)
{
for(int j=0;j<3;j++){
transarr[j][i]=arr[i][j];}
}
}

void displaytrans(int transarr[3][3]){
for (int i=0;i<3;i++)
{
for(int j=0;j<3;j++){
cout<<transarr[i][j]<<" ";
}cout<<endl;
}
}

void symmetric(int arr[3][3],int transarr[3][3])
{   bool symmetric =true;
    for (int i=0;i<3;i++){
    for(int j=0;j<3;j++)
        {if(arr[i][j]!=transarr[i][j]){
            symmetric= false;}
            break;}
        }
    if(symmetric)
        {cout<<"matrix is symmetric"<<endl;}
    else{cout<<"matrix is not symmetric"<<endl;}
}

bool singular(int arr[3][3]){
int a1=arr[0][0],a2=arr[0][1],a3=arr[0][2];
int b1=arr[1][0],b2=arr[1][1],b3=arr[1][2]; 
int c1=arr[2][0],c2=arr[2][1],c3=arr[2][2];  

int det=a1*(b2*c3 - b3*c2) - a2*(b1*c3 - b3*c1) + a3*(b1*c2-b2*c1);
if (det==0){cout << "The matrix is singular." << endl;}
else{cout << "The matrix is not singular." << endl;}
}


int main()
{
int arr2[3][3];
int arr3[3][3];
add(arr2);
display(arr2);

cout<< "transpose of matrix: "<<endl;
transpose(arr2,arr3);
displaytrans(arr3);

symmetric(arr2,arr3);
singular(arr2);
return 0;
}
/*
1 2 3 
4 5 6 
7 8 9 
transpose of matrix: 
1 4 7 
2 5 8 
3 6 9 
matrix is not symmetric
The matrix is singular.
*/