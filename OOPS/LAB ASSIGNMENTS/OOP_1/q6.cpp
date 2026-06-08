#include<iostream>
using namespace std;

void dotproduct(int*v3,int*v4,int size){
int sum=0;
for (int i=0;i<size;i++){ 
int product = v3[i]*v4[i];
sum+=product;}
cout<<" dot product = "<<sum<<endl;
}

int main()
{
cout<<"enter size of vector"<<endl;
int s;
cin>>s;

int*v1= new int[s];
int*v2= new int[s];

cout<<"enter v1 ele"<<endl;
for (int i=0;i<s;i++)
{cin>>v1[i];}

cout<<"enter v2 ele"<<endl;
for(int i=0;i<s;i++)
{cin>>v2[i];}

cout<<"vector 1= "<<endl;
for (int i=0;i<s;i++)
{cout<< v1[i]<<" ";}

cout<<endl;

cout<<"vector 2= "<<endl;
for (int i=0;i<s;i++)
{cout<< v2[i]<<" ";}

cout<<endl;
dotproduct(v1,v2,s);

return 0;
}
/*
vector 1=
1 2 3
vector 2=
4 5 6
dot product = 32
*/