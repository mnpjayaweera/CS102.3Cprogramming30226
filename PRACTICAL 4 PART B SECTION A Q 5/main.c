#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,reversenum=0,remainder;
printf("ENTER A NUMBER:");
scanf("%d",&num);
do {
    remainder=num%10;
    reversenum=reversenum*10+remainder;
    num/=10;}
    while (num!=0);
        printf("reversed number is %d",reversenum);


}
