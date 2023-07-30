#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    printf("ENTER A NUMBER:");
    scanf("%d",&num1);
     switch (num1 % 2) {
        case 0:
            printf("The number is even.\n");
            break;
        case 1:
            printf("The number is odd.\n");
            break;
     }

}
