#include <stdio.h>
#include <stdlib.h>

int main()
{
  int radius;
  float diameter,circumference,area;
  printf("ENTER THE RADIUS OF THE CIRCLE in centimeters:");
  scanf("%d",&radius);
  diameter=radius*2;
  circumference=2*3.14159*radius;
  area=3.14159*(radius*radius);
  printf("DIAMETER IS %f cm\n",diameter);
  printf("CIRCUMFERENCE IS %f cm\n",circumference);
  printf("AREA IS %f squre cm\n",area);


}
