#include <stdio.h>
int main()
{
    int x;
    printf("enter the number :");
    scanf("%d",&x);
    getchar();
    char y[6];
    printf("enter the variable :");
    scanf("%s",&y);
    getchar();
    float z;
    printf("enter the number :");
    scanf("%f",&z);
    getchar();
    double q;
    printf("enter the number :");
    scanf("%lf",&q);
    getchar();
    printf("%d\n%c\n%f\n%lf\n",x,y,z,q);
}
