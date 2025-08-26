#include<bits/stdc++.h>
#include<vector>
using namespace std;

//PAIRS

void Explainpairs(){
    //any datatype can be used

    pair<int,int> pair ={1,3};
    cout<<pair.first <<" " <<pair.second;

    pair<int pair ,<int,int>> p = {1,{2,4}};

    cout<<p.first <<" " << p.second.first << p.second.second;
    pair<int,int>arr[]={{1,3},{5,7},{9,11}};

    cout<< arr[1].second;
}

//containers

//vectors
// --->any data type can be used
// --->container that is dynamic in nature 
// --->can always increase size of vector

void Explainvectors(){

    vector<int> v;   //creates empty container

    v.push_back(1);   // {}--->{1}
    v.emplace_back(2)  //{}--->{1}--->{1,2} dynamically increses its size and inserts 2 at back
                       //emplace_back is faster than pushback why?

    //push_back adds a copy of the given object to the end of the container.

    //emplace_back constructs an element in place at the end of the container.
    // It forwards the arguments you pass directly to the constructor of the element type.
    //more efficient 

    vector<pair<int,int>>vec;

    v.pushback({1,2});      //put in {}
    v.emplace_back(1,2);    //autometically assumes to be a pair

    vector<int> v(5,100); //--->{100,100,100,100,100}

    vector<int> v(5);  //----->{garbage value 5 times depends on compiler}
    
    vector<int> v1(5,20);              //---->{20,20,20,20,20}
    v1.pushback(3)             //---->{20,20,20,20,20,3} //even after pre defining its size we can add new num
    vector<int> v2(v1);  //for copying elemnets of container/vector v1 to v2


//how to access elements of vector

//v[0] , v[5] , v.at(0), v.at(2) like this

//another way through iterators
//v.begins iterators point to memory address just like pointer
vector<data type> :: iterator it = v.begin();
it++;
cout<< *(it)<<" ";

it = it + 2;
cout<<*(it) <<" ";

vector<int>::iterator it = v.end();
vector<int>::iterator it =v.rend();
vector<int>::iterator it =v.rbegin();

cout<< v[0] << " " <<v.at(0);
cout << v.back() << " ";

// to print entire vector

for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
{
    cout<< *(it) <<" ";
}

for (auto it =v.begin(); it!=v.end() ; it++ )
{
    cout<< *(it) <<" ";
}

for(auto it : v){
    cout<< it << " ";
}

// {10, 20 ,12, 23}
v.erase(v.begin()+1);
//after erasing {10,12,23}


// {10, 20, 12, 23, 25}
//v.erase(start,end)
v.erase(v.begin()+1 , v.end()-3);


//insert function

vector<int>v(2,5);   //{2,2,2,2,2}

v.insert(v.begin(),10);     //{10,2,2,2,2,2}
v.insert(v.begin()+1,3);    //{10,3,2,2,2,2,2}
v.insert(v.begin()+2,2,8);  //{10,3,8,8,2,2,2,2,2}

vector<int>copy(2,50); //{50,50}
v.insert(v.begin(),copy.begin(),copy.end());  //{50,50,10,3,8,8,2,2,2,2,2}

cout<< v.size();  
//how many elements in vector
 //{20,20} output=2
v.pop_back();  //pops out last element
//{10,20}  output=10

//v1={1,3}
//v2={2,5}
v1.swap(v2) //v1 ---> {2,5}   v2--->{1,3}

v.clear(); //erases entire vector

cout<<v.empty();  //if vector has min one elemnt return true if no elemnt false
}

//LIST 


//GIVES FRONT OPERATIONS AS WELL
//SIMILAR TO VECTOR

void Explainlist(){
    list <int> ls;
    ls.push_back(2);      //{2}
    ls.emplace_back(4);   //{2,4}
    ls.push_front(5);     //{5,2,4}    in vector we've to use insert function
    ls.emplace_front(6);  //{6,5,2,4}
    ls.pop_back();
    ls.pop_front();

    //insert fun in vector is very costly ( takes a lot of time)
    // for doubly link list a list is maintained and for vector singly linked list is maintained
    // time complexity wise list is better     
    //other functions same as vector
    //begin,end,rbegin,rend,clear,insert ,swap,size

}

void Explaindeque(){

    deque<int>dq;
    dq.push_back(1);      //{1}
    dq.emplace_back(2);   //{1,2}
    dq.push_front(4);      //{4,1,2}
    dq.emplace_front(3);   //{3,4,1,2}

    dq.pop_back();   // {3,4,1}
    dq.pop_front();  //{4,1}

    dq.back();     
    dq.front();

//other functions same as vector
//begin,end,rbegin,rend,clear,insert ,swap,size

void Explainstack(){
    stack<int> st;
    st.push(1);        //{1}                   
    st.push(2);        //{2,1}
    st.push(3);        //{3,2,1}
    st.push(3);        //{3,3,2,1}
    st.emplace(5);     //{5,3,3,2,1}    

    //its LIFO
    //cout << st[2] is invalid 
    //indexing is not allowed

    cout<< st.top();  //prints 5

    st.pop(5);                //{3,3,2,1}   //it is deleted from stack   # agad thi nikde
    cout<< st.top();          //3
    cout<< st.size();         //4
    cout<< st.empty();

    stack<int>st1,st2;
    st1.swap(st2);
}
}

void Explainqueue(){
//FIFO
//pachad thi nikde

    queue<int>q;
    q.push(1);         //{1}
    q.push(2);         //{1,2}
    q.emplace(4);      //{1,2,4}

    q.back() +=5   // 5 adds to last elemnt 4  {1,2,9}
    cout<< q.back(); //prints 9

    q.pop();  //{2,9}
    cout<<q.front();  //prints 2

    //size ,swap same as stack
}



void Explainpriority_queue(){
    priority_queue<int>pq;

    pq.push(5);     //{5}                10
    pq.push(2);     //{2,5}              8        ===>>  MAX HEAP
    pq.push(8);     //{8,5,2}            5
    pq.emplace(10); //{10,8,5,2}         2  

    cout<< pq.top();  //prints 10
    pq.pop();  //{8,5,2}
    cout<< pq.top();  //prints 8
    pq.pop();
    pq.top();


    //FOR MIN PQ i.e min elemennt at top                 
    priority_queue<int,vector<int>,greater<int>>pq;   //  2
        //then perform all ops                        //  5     ===>> MIN HEAP 
                                                      //  8
                                                      //  10  

    //size ,swap, empty fun same as stack
    //not a linear ds inside it a tree is maintained 
    //largest int /char element stays at top
    //here lexicographically largest string integer character will stay at top
}

void explainset(){
    set<int>st;                               
    st.insert(1);  //{1}
    st.emplace(2);  //{1,2}
    st.insert(2);  //{1,2}
    st.insert(4);  //{1,2,4}
    st.insert(3);  //{1,2,3,4}

     // {1,2,3,4,5}
    auto it = st.find(3);  // ==> returns iterator that points to 3
    auto it =st.find(6);   // ==> returns iterator which points to st.end() [that is pointing right after set]
                          // as 6 is not there
    st.erase(5);          // deletes and maintains sorted order
    auto it =st.find(4);
    st.erase(it);         //it takes const time

    //{1,2,3,4,5}
    auto it1 =st.find(2);
    auto it2 =st.find(4);
    st.erase(it1,it2);   //{1,4,5}  {1st,last}

    int cnt =st.count(1);  // as its a set it will return 1 if exists else 0


    //unique and sorted 
    //not a linear ds inside it a tree is maintained inside it
    //functionality of insert in vector can also be used that only increases efficiency
    // begin(),end(),rbegin(),rend()
    //size ,swap, empty fun same

    auto it =st.lower_bound(2);
    auto it = st.upper_bound(3);
}


void ExplainMuiltiset(){
    //sorted like set but not unique
    multiset<int>ms;
    ms.insert(1);   //{1}
    ms.insert(1);   //{1,1}
    ms.insert(1);   //{1,1,1}

    ms.erase(1); //all ones will be erased i.e erase elemnt
    ms.erase(ms.find(1));  //only one 1 is erased find points to iterator 
    ms.erase(ms.find(1),ms.find(1)+2);   //erase(starting add,ending add)

    int cnt =ms.count(1); {3}

    //rest fun same as set
}

void ExplainUSet(){
    unordered_set<int>st;
    //randomized & can have any order in the world
    //unsorted but unique
    //all ops in most cases tc= o(1)  worst worst case o(n)
    //all ops same as set
    //only upper bound and lower bound fun do not work
    //does not store in any particular order but has a better time complexity than set in most cases

}


// MAP

// map eg. aman aman name two people but differntiate with rollnum
// { keys    values }  keys must be unique value can be same
// map stores unique keys in sorted order according to keys
// key can be of any data type int,double,pair
                            
void Explainmap(){
    map<int,int>mpp1;

    map<int,pair<int,int>>mpp2;

    map<pair<int,int>,int>mpp3;

    map1[1]=2;               // |{1,2} |
    map1.emplace({3,1});     // |{2,4} |
    map1.insert({2,4});      // |{3,1} |

    map2[{2,3}]=10;          // key {2,3} and value for it is 10 
                             // {{2,3} , 10}
 
    //iteration
    for(auto it : map1){
        cout<<it.first<<" "<< it.second <<endl;
    }
    cout<<map1[1];  {2}
    cout<<map1[6];  {0 or null}

    auto it = map1.find(3);  //it gives the iterator 
    cout<< *(it).second    // * means the element 3.1  and .second means value  i.e 1
    
    auto it = map1.find(5) //if not there then returns iterator pointing to map1.end i.e after the end
    
    //upper bound and lower bound same
    auto it =map1.lower_bound(2);
    auto it = map1.upper_bound(3);

    //erase , size ,swap ,empty rest all fun same 
    
    }

    void ExplainMuiltimap(){
        
    }

