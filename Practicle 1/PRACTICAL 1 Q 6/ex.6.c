#include <stdio.h>
#include <stdlib.h>

int main()
{
int byear,age;
char name[50];

    printf("ENTER STUDENT NAME:");
    scanf("%s",&name);
    printf("ENTER BIRTH YEAR:");
    scanf("%d",&byear);
age=2023-byear;
printf("%s\nAGE IS %d",name,age);
}
