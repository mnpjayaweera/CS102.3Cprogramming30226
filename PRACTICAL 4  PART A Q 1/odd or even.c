#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,answer;
    printf("ENTER THE FIRST NUMBER:");
    scanf("%d",&num1);
    answer=num1%2;
    if (answer==1)
        printf("number is odd");
    else printf("THE NUMBER IS EVEN");
}
