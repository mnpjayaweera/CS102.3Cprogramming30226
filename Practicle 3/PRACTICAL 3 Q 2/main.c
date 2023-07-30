#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num1,num2,num3,max,min;
   printf("ENTER THE FIRST NUMBER:");
 scanf("%d",&num1);
 printf("ENTER THE SECOND NUMBER:");
 scanf("%d",&num2);
 printf("ENTER THE THIRD NUMBER:");
 scanf("%d",&num3);
 if(num1>num2 && num1>num3)
    max=num1;
 else if (num2>num1 && num2>num3)
   max=num2;
 else
    max=num3;
    printf("the largest number is %d\n",max);
    if (num1<num2 && num1<num3)
    min=num1;
    else if (num2<num1 && num2<num3)
        min=num2;
    else
        min=num3;
    printf("the smallest number is %d",min);

}

