#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<fstream>  //file handling
using namespace std;

class min_stack{
    stack<pair<int,int>>st;
    void push(void){
        if(st.empty())
            st.push({value,value});
        else
            st.push({value,min(value,st.top().second)});
    }

    int getmin(){
        st.top().second;
    }

    int top(){
        st.top().first;
    }
 }

int main()
{
    st.push(1);
    st.push(4);
    st.push(0);
    st.push(5);
    get_min();
    return 0;
}