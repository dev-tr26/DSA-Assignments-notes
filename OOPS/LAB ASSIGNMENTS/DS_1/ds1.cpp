#include<iostream>
using namespace std;

//call by refrence


void swap(int &x,int &y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}

int main()
{
    int a=5,b=9;
    cout<<"before swap"<<endl;
    cout<< "a= "<<a << " b= " <<b <<endl;

    swap(a,b);
    cout<<"after swap"<<endl;
    cout<< "a= "<<a << " b= " <<b;

    return 0;
}


//palindrome

void palindrome_str(string str, int length){
    
    for (int i = 0; i < length/2; i++)
    {
        if (str[i] !=str[length-i-1])
        {
            cout<<"its not a palindrome"<<endl;
            return;
        }
    }   
    cout<<"its a palindrome"<<endl;
}

int main()
{
    string str;
    cout<<"enter string"<<endl;
    cin>>str;
    int length =str.length();
    palindrome_str(str,length);

    return 0;
}

//max min array


void maximum_ele(int arr[], int n, int &max_ele) {
    max_ele = arr[0]; 
    for (int i = 0; i < n; i++) {
        if (arr[i] > max_ele) {
            max_ele = arr[i];
        }
    }
}

void minimum_ele(int arr[], int n, int &min_ele) {
    min_ele = arr[0]; 
    for (int i = 0; i < n; i++) {
        if (arr[i] < min_ele) {
            min_ele = arr[i];
        }
    }
}

int main() {
    int arr[] = {1, 877, 29, 290};

    int n = sizeof(arr) / sizeof(arr[0]);
    int max_ele, min_ele;

    maximum_ele(arr, n, max_ele);
    minimum_ele(arr, n, min_ele);

    cout << "Maximum element = " << max_ele << endl;
    cout << "Minimum element = " << min_ele << endl;

    return 0;
}


// REVERSE STRING


void rev_str(char*str, char*reversed_str){
    int length=0;
    while (str[length] !='\0')
    {
        length++;
    }
    
    for (int i = length-1,j=0; i>=0; i--,j++)
    {
        reversed_str[j]=str[i];
    }

    reversed_str[length]='\0';
}

int main(){
    char str[22];
    char reversed_str[22];

    cout<<"enter the string"<<endl;
    cin>>str;

    rev_str(str,reversed_str);

    cout<<"reversed string is " << reversed_str <<endl;
    return 0;
}