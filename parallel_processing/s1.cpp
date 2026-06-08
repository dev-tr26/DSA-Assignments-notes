#include<iostream>
#include<thread>

using namespace std;

void work(int id){
    cout << "Thread " << id << " is working. \n"<<endl;
}


int main(){

    thread t1(work , 1);
    thread t2(work, 2);

    t1.join();
    t2.join();
    return 0;
}
