# include<bits/stdc++.h>
using namespace std;

// In C++ or any language, characters are internally treated as integers via ASCII.
// 'a'  to 'z'  = 97 to 122
// 'A'  to 'Z' = 65 to 90
// we're not manipulating string directly e are tracing character history / pos after transformation


int main(){

// convert char to int posn
char c;
int pos = c - 'a';
int pos = c - 'A';

// rotation or shift by n 
// "abc" n =2 ---> "cde"
char caesar_cipher(char c, int n){
    return (c - 'a' + n)% 26 + 'a';
}


// reverse caser cipher

char unshiftchar(char c, int n){
    return (c - 'a' - n + 26)%26 + 'a';
}

// 'a' <-> 'z' , b <-> 'y
// abc = zyx

char mirror(char c){
    return 'z' - (c - 'a');
}

// toggle 
isdigit(c)   // true for '0' to '9'
isalpha(c)   // true for 'A'–'Z' and 'a'–'z'
islower(c)   // true for lowercase
isupper(c)   // true for uppercase

char toggle(char c){
    if(islower(c))return c 'a' + 'A';
    else return c;
}

// freq count

int freq[26]={0};
string str ="qwdqwxjwmejjjjqwqq";
for(char c: str){
    freq[c - 'a']++;
}



//custom char transformation
// eg. replace every wovel with #

bool isVowel(char c){
    return c == 'a' || c == 'e' || c == 'i' || c=='o' || c =='u';
}

string transform(string s){
    for(char &c: s){
        if(isVowel(c))c = '#';
    }
    return s;
}


return 0;
}