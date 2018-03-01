#include<stdio.h>
#include<string.h>
void main()
{
    int i,j;
    char s[1000];
    printf(" enter the string\n");
    gets(s);
    printf("enter the number :\n");
    scanf("%d",&j);
    for(i=0;i<j;i++)
    {
        printf("%s \n",s);
    }
}
