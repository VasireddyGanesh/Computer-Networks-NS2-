// stop and wait
#include<stdio.h>
#include<stdlib.h>

void main()
{
  int i,n,r,a;
  printf("\nEnter the number packets need to transfer:");
  scanf("%d",&n);

  for(i=1;i<=n;i++)
  {
    printf("\n The packet sent is %d",i);
    r=rand()%2;
    if(r==1)
    {
      a=rand()%2;
      if(a==1)
        printf("\n Ack number: %d",i+1);
      else
      {
        printf("\n No Ack number: %d",i+1);
        i--;
      }
    }
    else
    {
      printf("\n Time out, resend");
      i--;
    }
  }
}