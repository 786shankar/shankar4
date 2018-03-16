#include<stdio.h>
#include<string.h>
void main()
{
    char a[100],b[100];
    int i,j;
    printf("enter the first string : ");
    scanf("%s",a);
     printf("\nenter the second string: ");
     scanf("%s",b);
     for(i=0;a[i]!='\0';i++)
     {
    
     }
      for(j=0;b[j]!='\0';j++)
     {
         a[i]=b[j];
         i++;
     }
      a[i]='\0';
     printf("\n%s",a);
}
