#include <stdio.h>
#include <stdlib.h>

int main()
{
  float distance, time, speed;

    printf("Enter the distance traveled by the car in meters: ");
    scanf("%f", &distance);

    printf("Enter the time taken by the car to travel the distance in seconds: ");
    scanf("%f", &time);

    speed = distance / time;

    printf("The average speed of the car is %.2f m/s\n", speed);
 }
