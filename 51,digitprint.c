#include<stdio.h>
void main()
{
    int a,b,rem,rev=0,rem1;
    printf("enter the number :");
    scanf("%d",&a);
    while(a!=0)
    {
        rem=a%10;
        rev=rev*10+rem;
        a=a/10;
    }
    while(rev!=0)
    {
        rem1=rev%10;
        printf("%d ",rem1);
        rev=rev/10;
    }
}
