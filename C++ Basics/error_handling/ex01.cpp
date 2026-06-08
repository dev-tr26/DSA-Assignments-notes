#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<fstream>  //file handling
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(b==0){
        throw "Runtime Error : division with zero not possible";
    }
    try{
        if(b==0)
        int c = a/b;
    }catch(const char *e){
        cout<<"Exception occured: "<<e<<endl;
    }

    cout<<c<<endl;
    return 0;
}