#include <stdio.h>
#include <stdlib.h>

int main()
{
int num,count=1,pos=0,neg=0,zer=0;
while(count<=10)
{
    printf("ENTER A NUMBER:");
    scanf("%d",&num);
    if (num>0)
        pos=pos+1;
        else if (num<0)
        neg=neg+1;
        else
        zer=zer+1;
        count++;
        }
printf("positives=%d\nnegatives=%d\nzeros=%d",pos,neg,zer);
}
