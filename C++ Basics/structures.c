#include<stdio.h>
#include<string.h>
//user defined data type 


    struct [structure_name]
    {
        //data type  var1
        //data type  var2..
    }
    [structure_variables]

//data type banaya and then used    
                                    
struct employee           
{                         
int id;                   
char name[56];            
float marks;             
};

struct employee e1,e2;

int main()
{
return 0;
}

//made variable and used eith it

struct employee           
{                         
int id;                   
char name[56];            
float marks;             
}e1,e2;

int main()
{
struct employee tt;
return 0;
}

//structure members can be accesed with "structure member operator[.]"




struct student
{
    int id;
    int marks;
    char fav_cricketer[44];  //structur ma array size devi pade
    float attendance;
};//if written here tr,kp,rd same code will run

struct student tr,kp,rd;   //here these are global variables also bija koi fun banavi ne pan access kri sakai

void attend()
{
    printf("tr has %.2f attendance\n",tr.attendance);
    printf("kp has %.2f attendance\n",kp.attendance);
    printf("rd has %.2f attendance\n",rd.attendance);
}

int main()
{
    struct student tr,kp,rd;
    
    //here these are local variables and also if variables are in any fun are also local var
    //local var cannot be accessed from anywhere
    tr.id=1;
    kp.id=2;
    rd.id=3;
    tr.marks=33;
    kp.marks=56;
    rd.marks=23;
    
    //strcpy fun used to copy a string from one variable to another. 
    //Since fav_cricketer is an array of character
    strcpy(tr.fav_cricketer,"jadeja");         
    strcpy(kp.fav_cricketer,"rohit");
    strcpy(rd.fav_cricketer,"bumrah");
    tr.attendance=80.56;
    kp.attendance=75.02;
    rd.attendance=67.87;

    printf("tr got %d marks\n",tr.marks);
    printf("tr's fav cricketer is %s\n",tr.fav_cricketer);
    printf("rd's fav cricketer is %s\n",rd.fav_cricketer);
    printf("rd got %d marks\n",rd.marks);

    attend();

    return 0;
}


//union
//in struct each member has its own storage location
//in union member uses single shared memory locations
//shared memory location =size of its largest data member
//we can access any one member at a time


union test{
    int a;
    float b;
    char c[14];
}un;

int main(){
    //un.a=34;                            
    un.b=56.43;
   // strcpy(un.c ,"rudra");
   // printf("a is equal to %d\n",un.a);
    printf("b is equal to %f\n",un.b);
    //printf("c is equal to %s\n",un.c);
    return 0;
}







