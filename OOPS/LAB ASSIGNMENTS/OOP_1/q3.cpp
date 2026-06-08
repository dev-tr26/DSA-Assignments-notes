#include<iostream>
using namespace std;

void add_ele(int *arr,int n){
cout<<"enter array ele"<<endl;
for (int i = 0;i<n;i ++)
{cin>>*(arr + i);}
}

void display(int *arr,int n){
cout<<"array= ";
for(int i=0;i<n;i++){cout<<*(arr+i)<<" ";}
}

void arrsumavg(int *arr,int n){
int sum=0;
for (int i = 0;i<n;i++)
{ sum+=*(arr+i);}
cout<<endl;
cout<<"sum of arr ele= "<< sum<<endl;

int avg = sum/n;
cout<<" avg of ele= "<<avg<<endl;
}

void arrmaxele(int *arr,int n){
int max_ele=0;
for (int i = 0;i<n;i++){
    if(*(arr+i)>=max_ele){
    max_ele=*(arr+i);}
    }
    cout<<"max ele= "<<max_ele<<endl;
}


int main(){
int arr2[5];
int g=5;
add_ele(arr2,g);
display(arr2,g);
arrsumavg(arr2,g);
arrmaxele(arr2,g);
return 0;
}

/*
array= 2 3 4 5 6 
sum of arr ele= 20
avg of ele= 4
max ele= 6
*/