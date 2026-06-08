// using namespace std  dont use this 
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<fstream>  //file handling


void know_algo(){
    const std::vector<int>data = {2,23,4,5,6};

    const auto is_positive = [](const auto &x){
        return x > 0;
    };
    auto first_pos_int = std::find_if(data.cbegin(),data.end(),is_positive);
}

auto it = find(nu ms.begin(),nums.end(),number);
return it!=nums.end()

// [first, last) scans this range and returns iterator pointing to that element 


bool isGreaterThan25(int x) {
    return x > 25;
}

// this fun is same as 
auto it = std::find_if(v.begin(), v.end(), [](int x) { return x > 25; });


// TYPECASTING

// 1. static cast

Purpose:
Used for well-defined conversions that the compiler can check at compile time.

Examples of what you can do:

Convert between numeric types (e.g. int → double)
Convert up or down an inheritance hierarchy (but not across it)
Explicitly call a user-defined conversion operator
Convert a void* pointer back to its original type (if you know what it is)


int i = 10;
double d = static_cast<double>(i);  // int → double

double pi = 3.14;
int n = static_cast<int>(pi);       // double → int (truncates)

class Base {};
class Derived : public Base {};

Derived d1;
Base* b = static_cast<Base*>(&d1);  // Upcast (safe)


static_cast dont perform runtime checks 

// 2. reinterpret_Cast

Used for low-level, bitwise reinterpretation of a value — telling the compiler to treat the bits as a different type.

⚠️ This is very unsafe unless you really know what you’re doing.
Mostly used for:

Casting between pointer types of unrelated classes
Casting integer ↔ pointer
Hardware or system-level programming (e.g. embedded systems, serializatio

if used reinterpret_cast to treat memory as different type that its not meant to be then can cause undefined behaviour or data corruption 
int a = 65;
char* p = reinterpret_cast<char*>(&a);

// reinterpret bits of 'a' as a char array

void* v = p;
int* ip = reinterpret_cast<int*>(v);  // treat void* as int*


reinterpreting bytes of float as long is undefined use memcpy bit_cast instead 
explain this