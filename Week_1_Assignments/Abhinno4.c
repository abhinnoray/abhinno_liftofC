 //Write a C program to enter two numbers and perform all arithmetic operations using switch case.

 # include <stdio.h>
 int main()
 {
    int a,b,x = 0;
    char s;

    int f = 1;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("enter second number : ");
    scanf("%d", &b);
    printf("_ _ Enter + to get sum _ _\n");
    printf("_ _ Enter _ to get difference _ _\n");
    printf("_ _ Enter * to get product _ _\n");
    printf("_ _ Enter / to get quotient _ _\n");
    printf("_ _ Enter %% to get remainder _ _ \n");
    printf("\n");
    fflush(stdin);
    printf("Enter the requiored character : ");
    scanf("%c",&s);


    switch(s)
    {
        case '+':
        {
            x=a+b;
            break;
        }
        case '_':
        {
            x=a-b;
            break;
        }
        case '*':
        {
            x=a*b;
            break;
        }
        case '/':
        {
            x=a/b;
            break;
        }
        case '%':
        {
            x=a%b;
            break;
        }
        default:
        {
            f=0;
        }

    }
    if(f == 0)
    {
        printf("Please enter character from among the options...");
    }
    else
    {
        printf("%d %c %d = %d", a, s, b, x);
    }


 }
 
    
