#include<stdio.h>
#include<string.h>

//strings
//nothing but char array
//array size must be of (len + 1) one extra for null char \0
//char name[]={'a','e','i','o','u','\0'}   null char has to be put
//char name[]={'aeiou'}  here null char automatically created

/*
void print_str(char str[])
{
    int i=0;
    while (str[i]!= '\0')
    {
        printf("%c",str[i]);
        i++;
    }
    
}


int main()
{

//char str[]={'r','u','d','r','a','\0'};
char str[34];
gets(str);
print_str(str);  //using custom fun print str
return 0;
}
*/


/*
int main()
{
    char str[34]; 
    //it will print more than len of array as gets fun  does not check size of array unsafe
    //gets(str) 
    fgets(str, sizeof(str), stdin); // Safer 
    printf("using printf %s",str);

    /*using puts
    puts(str);
    return 0;
}
*/

int main()
{
    char s1[]="trv";
    char s2[]="rudra";
    char s3[22];
    char s4[]="trv";

    //puts(strcat(s1,s2));
    
    printf("the reversed string is: \n");
    puts(strrev(s1));

    printf("the length of s1 is %d\n",strlen(s1));   //strlen gives length without null char
    printf("the length of s2 is %d\n",strlen(s2));


    //s3=strcat(s1,s2) it wont work
    strcpy(s3,strcat(s1,s2));
    puts(s3);

    //strcmp gives 0 if string matches otherwise give difference of two ascii values
    printf("the strcmp for s1 and s2 is %d\n",strcmp(s1,s2)); //s2-s1
    printf("the strcmp for s1 and s2 is %d\n",strcmp(s2,s1)); //s1-s2
    printf("the strcmp for s1 and s4 is %d\n",strcmp(s1,s4));

    //example program

    char s5[20];
    char s6[21];
    char s7[]={" is a friend of "};

    printf("enter 1st friend name\n");
    gets(s5);

    printf("enter 2nd friend name\n");
    gets(s6);
    
    puts(strcat(s5,strcat(s7,s6)));
    
    return 0;
}


