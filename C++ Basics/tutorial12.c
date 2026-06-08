#include <stdio.h>
int main()
{

  /*do
  {
    printf("%d\n",index);
    index= index + 1;

  } while(index<num);
*/


/*in do while loop do loop will be executed 1st then condition is evaluated*/

int a,i;
printf("enter the number whose table you want");
scanf("%d",&a);
i=0;

  do
  {
      printf("%dx%d=%d\n",a,i,a*i);
      i=i+1;
  }while(i<=100);


  /*

  int i = 0, j;
  int num = 0;
  do
  {
    j = 0;
    do
    {
      printf("%d  ", num++);
      j++;
    } while (j < 4);

    printf("\n");
    i++;
  } while (i < 4);
*/

/* int n;
  int i = 0;
  printf("enter a number");
  scanf("%d", n);
  while (n>i)
  { 
    printf("%d", n);
    i = i+1;
  }

*/
  return 0;
}