#include <stdio.h>
#include <stdlib.h>

int main()
{
  int monthnumber;
  printf("ENTER THE MONTH NUMBER:");
  scanf("%d",&monthnumber);
  switch(monthnumber)
  {
  case 1:
    printf("NUMBER OF DAYS-31");
    break;
  case 2:
    printf("NUMBER OF DAYS-28");
    break;
  case 3:
     printf("NUMBER OF DAYS-31");
    break;
  case 4:
    printf("NUMBER OF DAYS-30");
    break;
  case 5:
     printf("NUMBER OF DAYS-31");
    break;
  case 6:
    printf("NUMBER OF DAYS-30");
    break;
  case 7:
     printf("NUMBER OF DAYS-31");
    break;
    case 8:
     printf("NUMBER OF DAYS-31");
    break;
    case 9:
      printf("NUMBER OF DAYS-30");
    break;
    case 10:
        printf("NUMBER OF DAYS-31");
    break;
    case 11:
        printf("NUMBER OF DAYS-30");
    break;
    case 12:
         printf("NUMBER OF DAYS-31");
    break;
  default:
    printf("INVALID NUMBER");
    break;
    }

}
