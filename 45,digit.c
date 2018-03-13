#include<stdio.h>
void main()
{
    int a,b=0,i;
    printf("enter the number");
    scanf("%d",&a);
    i=a;
    while(i!=0)
    {
        i=i/10;
        b++;
    }
    printf("the number of numeric digit is : %d",b);
}
