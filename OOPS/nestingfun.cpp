#include<bits/stdc++.h>
using namespace std;

//nesting calling of functions insides other function 
//binary hai ya nahi check karna is our job

class binary
{
    private:
        string s;
        void chk_bin(void);                //now this fun is private 
                                            //if we try to access it from int main b.chk_bin() it wont work
public:
    void read(void);
    // void chk_bin(void);
    void ones_compliment(void);
    void display(void);
};

void binary::read(void)
{
    cout << " enter binary number " <<endl;
    cin >> s;
}

void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) !='0' && s.at(i) !='1')
        {
            cout<<"incorrect binary format"<<endl;
            exit(0);    
        }   
    }
}

void binary :: ones_compliment(void)
{
    // chk_bin();                         //nesting of functions
    
    
    for (int i = 0; i <s.length(); i++)
    {
        if (s.at(i)=='0')
        {
            s.at(i)= '1';
        }
        else if (s.at(i)=='1')
        {
            s.at(i)='0';
        }
    }
}

void binary :: display(void){

    for (int i = 0; i <s.length(); i++)
    {
        cout << s.at(i);
    }
}
int main()
{
    binary b;
    b.read();
    b.chk_bin();
    b.ones_compliment();
    b.display();
    return 0;
}