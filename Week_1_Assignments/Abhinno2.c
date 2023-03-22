// Write a program that takes a number as input and checks wheather it is positive,negative or zero.

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    if(n>0)
    {
        printf("%d is a positive number.",n);
    }
    else if(n<0)
    {
        print("%d is a negative number.",n);
    }
    else
    {
        printf("%d is zero.",n);
    }
}
