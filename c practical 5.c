#include<stdio.h>
int main()
{
  int marks[10];
  int i, total=0;
  float avg;

  printf("enter 10 marks:\n");

  for (i=0; i<10; i++)
   {
     scanf("%d",&marks[i]);
     total+=marks[i];
   }
   avg=(float)total/10;

   printf("total marks: %d\n",total);
   printf("average marks: %2f\n",avg);

      if(avg<50)
       {
        printf("fail!\n");
       }
      else
       {
        printf("pass!\n");
       }
   return 0;
}
