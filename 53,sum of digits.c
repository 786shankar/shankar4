#include<stdio.h>
void main()
{
    int a,b,i,c=0;
    printf("enter the number:\n");
    scanf("%d",&a);
    while(a!=0)
    {
        b=a%10;
        c=c+b;
        a=a/10;
    }
    printf("the sum of digits are : %d",c);
}
