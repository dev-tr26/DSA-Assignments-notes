#include<iostream>
using namespace std;

class Tollbooth{
unsigned int cars_num;
double amt_collected;
public:

Tollbooth(){
    cars_num=0;
    amt_collected=0;
}

void payingCar(){
    cars_num++;
    amt_collected+=0.5;
}

void nonpayCar(){
    cars_num++;
}

void display() const {
    cout << "Total num of cars" << cars_num << endl;
    cout << "Total cash: $" << amt_collected << endl;
}

};

int main(){
    Tollbooth t;
    char c;
    cout<<" enter p for paying car & n for nonpaying & esc to exit"<<endl;
    cin>>c;
    if(c == 'p'){
        t.payingCar();
        t.display();
    }
    else if(c == 'n'){
        t.nonpayCar();
        t.display();
        }
    else if(c ==27){
        t.display();
    }
    return 0;
}

/*
enter p for paying car & n for nonpaying & esc to exit
p
Total num of cars1
Total cash: $0.5
*/