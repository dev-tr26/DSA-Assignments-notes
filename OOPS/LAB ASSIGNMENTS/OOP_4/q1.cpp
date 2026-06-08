#include<iostream>
#include<string>
using namespace std;

class Publication{
    protected:            
        string title;     
        float price;
    public:
        virtual void getdata()=0;
        virtual void putdata()=0;
        virtual bool isOversize()=0;
};

class book: public Publication{
    int pg_count;
    public:

        void getdata(){
            cout<<"enter book title ";
            cin>>title;
            cout<<"enter price of book ";
            cin>>price;
            cout<<"enter no of pages in book ";
            cin>>pg_count;
        }
        
        void putdata(){
            cout<<"title of book = "<<title<<endl;
            cout<<"price of book = "<<price<<endl;
            cout<<"no of pages = "<<pg_count<<endl;
            if(isOversize()){
                cout<<"Oversize"<<endl;
            }
        }

        bool isOversize(){
            return pg_count > 800;
        }
}; 

class tape : public Publication{
    float play_time;
    public:
        
        void getdata(){
            cout<<"enter tape title ";
            cin>>title;
            cout<<"enter price of tape ";
            cin>>price;
            cout<<"enter playing time of tape ";
            cin>>play_time;
        }

        void putdata(){
            cout<<"title of book = "<<title<<endl;
            cout<<"price of book = "<<price<<endl;
            cout<<"playing time of tape ="<<play_time<<endl;
            if(isOversize()){
                cout<<"Oversize"<<endl;
            }
        }

        bool isOversize(){
            return play_time> 90.0;
        }
};


int main(){
    Publication* arr[100] = {nullptr};
    int num = 0; 

    while(true)
    {
       int choice;
       cout<<"enter 1 for publication book"<<endl;
       cout<<"enter 2 for publication tape"<<endl;
       cout<<"enter 0 for exit"<<endl; 
       cin>>choice;

       if(choice==0){
           break;
       }

       if(choice == 1){
        arr[num] = new book;
        arr[num]->getdata();
        num++;
       }

       else if(choice ==2){
        arr[num] == new tape;
        arr[num]->getdata();
        num++;
       }
       else{
        cout<<"invalid i/p"<<endl;
       }
    }

    for (int i = 0; i <num; i++)
    {   
        if(arr[i]!=nullptr){
        arr[i]->putdata();
        cout<<endl;
        }
    }

    for (int i = 0; i <num; i++) {
        delete arr[i];
        arr[i] = nullptr;
    }
    return 0;
}