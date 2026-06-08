#include<stdio.h>
#include<string.h>

typedef struct acc_details
{
    int cus_id;
    char name[22];
    int acc_num;
    float bal;
} ad ; 

int main()
{
    //typedef <previous_name> <alias_name>;

/*   typedef unsigned long ul;
    ul l1, l2, l3;

    typedef int i;
    i a = 4;
    printf("the value of a is %d",a);
*/

    ad tr, kp ,rd;

    tr.cus_id =244566;
    kp.cus_id =893555;
    rd.cus_id =659898;

    tr.acc_num =24547688;
    kp.acc_num =78567574;
    rd.acc_num =47568679;

    strcpy(tr.name ,"rudra");
    strcpy(kp.name ,"joey");
    strcpy(rd.name ,"ross");

    tr.bal =2353.34;
    kp.bal =8955.97;
    rd.bal =6598.43;
    
    printf("tr's id is %d\n", tr.cus_id);
    printf("kp's id is %d\n", kp.cus_id);
    printf("rd's id is %d\n", rd.cus_id);

//int* x,y;  
//here pointer to x and integer c

typedef int* intpointer;
intpointer x,y;
int z = 89;
x = &z;
y = &z;
printf("address of z %p\n",*x);
printf("address of z %p\n",*y);

    return 0;
}