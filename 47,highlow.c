#include<stdio.h>
void main()
{
    int a[1000],i,j,k,n;
    printf("enter the size of array\n");
    scanf("%d",&n);
    printf("enter the values of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d\t",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                k=a[i];
                a[i]=a[j];
                a[j]=k;
            }
        }
    }
    printf("the highest number is : %d\n the lowest number is : %d",a[0],a[n-1]);
}
