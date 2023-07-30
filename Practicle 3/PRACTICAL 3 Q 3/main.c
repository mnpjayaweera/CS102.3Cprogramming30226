#include <stdio.h>
#include <stdlib.h>

int main()
{
  char name[40];
  int ns,bs,incr;
  printf("ENTER THE EMPLOYEE NAME:");
  scanf("%s",&name);
  printf("ENTER THE BASIC SALLERY:");
  scanf("%d",&bs);
  if (bs<5000)
    incr=bs*0.05;
  else if (5000<=bs && bs<10000)
    incr=bs*0.1;
  else
    incr=bs*0.15;
  ns=bs+incr;
  printf("NAME = %s\n",name);
  printf("NEW SALLERY = %d",ns);
}
