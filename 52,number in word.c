#include<stdio.h>
void main()
{
    int a;
    printf("enter the number betwen 1 and 10 :\n");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
            printf("one");
            break;
          case 2:
            printf("two");
            break;
            case 3:
            printf("three");
            break; 
            case 4:
            printf("four");
            break;
            case 5:
            printf("five");
            break; 
            case 6:
            printf("six");
            break;
            case 7:
            printf("seven");
            break;
            case 8:
            printf("eight");
            break; 
            case 9:
            printf("nine");
            break; 
            case 10:
            printf("ten");
            break;
            default :
            printf("enter the correct number");
    }
}
