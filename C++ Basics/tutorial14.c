#include<stdio.h>
int main()
{
int i,age;
for(i=0;i<=10;i++)
{
    printf("enter your age\n",i);
    scanf("%d",&age);

//    if(age>=15)
//    {
//        break;
//      }

    if (age<=12)
    {
        continue;
    }
    printf("all is well");
    printf("pak ki mkc");
    printf("yeh sab moh may ahe");

    }
// in case of nested loop jis wale for mein break likha hai usme se bahar aa o ge




//goto statement 

//preferable when we have to break muiltiple loops by single statement

lable:
printf("we are inside lable");
goto end;

printf("hello world\n");
goto lable;

end:
printf("we are at end");


//if written break to only 2nd for loop se exit hota not from all for loop

int num;
    for(int i = 0; i < 8; i++)
    {
        printf("%d\n", i);
        for(int j = 0; j < 8; j++)
        {
            printf("Enter the number. enter 0 to exit\n");
            scanf("%d", &num);
            if(num==0){
                goto end;                     
            }
        }
        
    }
    end:

//typecasting syntax
//(type);value

int a=4;
float b=54;
printf("the value of b is %d",(int)b);

float c=54/5;
printf("%f",c);  //result is 10 not excat as 54 and 5 both are integers so type conversion(compiler convert kar deta hai int data type mein) 

float (float)d=54/5;  //it will return 10.8
                      //int float ma ans float ma avse
printf("%f",d);



    

return 0;    
}