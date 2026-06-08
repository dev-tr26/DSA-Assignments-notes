#include<bits/stdc++.h>
using namespace std;

void add(int &subset ,int x){
    subset = (subset ^ (1 <<(x-1)));
}

void remove(int &subset,int x ){
    // for remove xor operation with only ith bit 1 rest bits 0
    subset = (subset ^ (1<< (x-1)));
}



void display(int subset){

    // to check ith bit of number is 0 or 1 
    // apply and operation with ith bit as 1 and rest all bits 0 to the corresponding number 
    for(int bit=0; bit <=9; bit++){
        if(subset & (1 << bit)){
            cout<< bit +1 <<'\n';
        }
    }

}


int main()
{
    int set = 15;
    remove(set,2);
    add(set,7);
    display(set);  //to tell which numbers of set is this integer representing 
    return 0;

}


