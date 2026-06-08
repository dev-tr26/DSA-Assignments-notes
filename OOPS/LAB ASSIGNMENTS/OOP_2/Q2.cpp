#include<iostream>
using namespace std;

class Int{
int var ;
public:

Int(){
var = 0;
}

void setInt(){
cout<<"enter element "<<endl;
cin>>var;
}

Int addInt(Int i1){
Int i;
i.var = var + i1.var;
return i;
}

void displayInt(){
cout << var <<endl;
}
};

int main()
{
    Int i,i1,i2;
    i1.setInt();
    i2.setInt();

    i = i1.addInt(i2);
    i.displayInt();
    return 0;
}

/*
enter element 
2
enter element
3

5
*/