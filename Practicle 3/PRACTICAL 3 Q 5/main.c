#include <stdio.h>
#include <stdlib.h>

int main()
{
int num1,num2;
printf("ENTER NUMBER ONE:");
scanf("%d",&num1);
printf("ENTER NUMBER TWO:");
scanf("%d",&num2);
if (num1%num2==0)
    printf("%d is a multiple of %d",num1,num2);
else
    printf("%d is not a multiple of %d",num1,num2);
}
