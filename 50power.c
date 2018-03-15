#include<stdio.h>
void main()
{
    int a,b,c,i;
    printf("enter the number :");
    scanf("%d",&b);
     while(b!=1)
     {
      c=b%2;
      if(c!=0)
      {
          printf("no,the given number is not a power of 2");
          break;
      }
      b=b/2;
     }
     if(b==1)
     printf("power of 2");
}
