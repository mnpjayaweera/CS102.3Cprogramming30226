#include <stdio.h>
#include <stdlib.h>

int main()
{
   int remainder,num,sum=0;
   printf("ENTER A NUMBER:");
   scanf("%d",&num);
   while (num!=0)
    {
    remainder=num%10;
    sum+=remainder;
    num/=10;
}
printf("\nsum=%d",sum);
}
