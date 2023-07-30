#include <stdio.h>
#include <stdlib.h>

int main()
{
 char operater;
 printf("enter an operater:");
 scanf("%c",&operater);
double num1,num2;
printf("enter first number:");
scanf("%lf",&num1);
printf("enter second number:");
scanf("%lf",&num2);
double result;
switch (operater){
case '+':
    result=num1+num2;
    printf("%f",result);
    break;
case '-':
    result=num1-num2;
    printf("%f",result);
    break;
    case'*':
    result=num1*num2;
    printf("%f",result);
    break;
    case'/':
        result=num1/num2;
        printf("%f",result);

}

}
