#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    printf("ENTER THE SIZE OF THE ARRAY:");
    scanf("%d",&size);
   int array1[size],array2[size],vectorsum[size],scalersum=0,i;
    printf("\nENTER THE ELEMENTS OF THE FIRST ARRAY:\n");
    for (i=0;i<size;i++)
    {
        printf("ENTER ELEMENT %d:\n",i+1);
        scanf("%d",&array1[i]);
        scalersum=scalersum+array1[i];
    }
    printf("\nENTER THE ELEMENTS OF THE SECOND ARRAY:\n");
    for (i=0;i<size;i++){
        printf("enter element %d\n",i+1);
        scanf("%d",&array2[i]);
        scalersum=scalersum+array2[i];
    vectorsum[i]=array1[i]+array2[i];}
    printf("\nSCALER SUM IS %d\n",scalersum);
    printf("\nVECTOR SUM :\n");
    for (i=0;i<size;i++)
     printf("%d\t",vectorsum[i]);

}
