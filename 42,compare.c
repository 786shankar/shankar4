#include<stdio.h>
void main()
{
    char a[100],b[100];
    int i,val1,val2;
    printf("enter the string 1: ");
    gets(a);
    printf("enter the string 2: ");
    gets(b);
    for(i=0;i<='\0';i++)
    {
        val1=val1+a[i];
    }
    for(i=0;i<='\0';i++)
    {
        val2=val2+b[i];
    }
    if(val1>val2)
    {
        printf("%s",a);
    }
    else
    {
        printf("%s",b);
    }
}
