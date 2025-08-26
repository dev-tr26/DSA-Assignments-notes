#include<bits/stdc++.h>
using namespace std;



string ReverseStr(string s){
    int n = s.size();
    int middle = int(n/2);
    for(int i=0; i<n/2; i++){
        swap(s[i], s[n-i-1]);
    }
    return s;
}


string ConverToBinary(int n){
    
    string res = "";
    while(n!=0){

        if(n % 2 == 1)res +="1";
        else{
            res+="0";
        }
        n = n/2;
    }
    string res_2 = ReverseStr(res);
    return res_2;
}


int main()
{
    int n = 2;
    string s = ConverToBinary(n);
    cout<<s;
    return 0;
}