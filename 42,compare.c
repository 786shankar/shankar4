#include<stdio.h>
#include<string.h>
void main()
{
    char a[100],b[100],c,d;
    int i,j;
    printf("enter the first string : ");
    scanf("%s",a);
     printf("\nenter the second string: ");
     scanf("%s",b);
     for(i=0,j=0;a[i]!='\0'||b[j]!='\0';i++,j++)
     {
      if(a[i]==b[j])
      {
          c=1;
      }
      else
      {
       c=2;   
      }
     }
     if(c==1)
     {
     printf("the strings are equal %s",a);
     }
     else if(c==2)
     printf("the given strings are not equal");
     for(i=0;a[i]!='\0';i++)
     {
         
     }
     for(j=0;b[j]!='\0';j++)
     {
         
     }
     if(c==2)
     {
     if(i>j)
     printf("\n%s",a);
     else if(j>i)
     printf("\n%s",b);
     else 
     printf("\n%s",b);
     }
}
