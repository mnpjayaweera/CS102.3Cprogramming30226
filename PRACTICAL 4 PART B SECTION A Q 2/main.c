#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1,num,avg,total=0;
    while (i<=10 && 0<=num<=100)
        {
        printf("enter the marks:");
        scanf("%d",&num);
        if (num < 0 || num > 100)
    {
            printf("Invalid mark value!\n");
            exit(1);
    }
        total=total+num;
        i++;
    }
avg=total/10;

if (avg<50)
 printf("fail");
else
    printf("pass");



}

