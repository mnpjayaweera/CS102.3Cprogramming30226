#include <stdio.h>
#include <stdlib.h>

int main()
{
   int arr[10],sum=0,min,max,i;
   float avg;
   printf("Enter 10 integer values:\n");
   for (i=0;i<10;i++)
   {
       printf("ENTER NUMBER %d:\n",i+1);
       scanf("%d",&arr[i]);
       sum=sum+arr[i];
       if (i==0)
       {
           min=max=arr[i];
       }
       else
       {
            if (arr[i]<min)
        {
        min=arr[i];
        }
        if (arr[i]>max)
            {
                max=arr[i];
        }
       }

   }
   avg=sum/10;
   printf("THE MINIMUM VALUE IS %d\n",min);
   printf("THE MAXIMUM VALUE IS %d\n",max);
   printf("THE AVERAGE IS %.2f\n",avg);
    printf("Array in reverse order: ");
    for (i = 9; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
}
