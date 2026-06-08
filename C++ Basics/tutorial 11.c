#include <stdio.h>
int main()
{
    /*int a;
    printf("enter 1 if you have passed science exam \n ,two if you have passed maths exam and \n 3 if you have passed science and maths both exams");
    scanf("%d",&a);
    printf("you have entered %d \n",a);
if(a==1){
        printf("congratulations! you will get 15 rs gift");
    }
    else if (a==2){
        printf("congratulations! you will get 15 rs gift");
    }
    else if(a==3){
        printf(" congratulations! you will get 45 rs gift");
    }
    
    return 0;*/

    //switch statement used for convinience if else se code gets messy
    //break use come out of all loops directly if not used then all cases will be executed
    //switch and case both must be int or char and case comes inside switch
    //default means when no case is matched

    int age;
    int marks;
    printf("enter the age");
    scanf("%d",&age);
    printf("enter the marks");
    scanf("%d",&marks);

    /*switch(age)
    {
        case(18):
            printf("you can vote in school");
            break; 
        case(25):
            printf("you are eligible to vote in college elections");
            break;

        default:
            printf("you have to wait to vote");          


    */

    switch(age)
    {
    case(18):
        printf("your age is 18 \n");
        switch(marks)
        {
        case(99):
            printf("your marks are  99\n");
            break;
            
        default:     
        }
        break;
    case(25):  
        printf("your age is 25\n");    
    }
    return 0;
}