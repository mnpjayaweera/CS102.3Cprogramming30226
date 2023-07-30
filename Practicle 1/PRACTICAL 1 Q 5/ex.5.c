#include <stdio.h>
#include <stdlib.h>

int main()
{
float num1,num2,average;
    printf("ENTER THE FIRST NUMBER:");
    scanf("%f",&num1);
    printf("ENTER THE SECOND NUMBER:");
    scanf("%f",&num2);
    average=(num1+num2)/2;
    printf("THE AVERAGE IS %.2f",average);
}
