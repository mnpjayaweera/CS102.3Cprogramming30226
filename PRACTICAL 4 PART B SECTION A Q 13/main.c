#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[10],i;
    for(i=0;i<10;i++)
    {
        printf("enter a value to the element %d",i+1);
        scanf("%d",&array[i]);
    }
    for(i=0;i<10;i++)
        printf("element %d contains %d\n",i+1,array[i]);
}
