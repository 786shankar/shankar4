#include<stdio.h>
void main()
{
    int a[1000],b,i,avg,sum=0;
    printf("enter the array size");
    scanf("%d",&b);
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<b;i++)
    {
        sum=sum+a[i];
    }
    avg=sum/b;
    printf("the average is : %d",avg);
}
