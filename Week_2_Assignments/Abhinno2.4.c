//Write a C program to print the following pattern using loop.
//1
//2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

#include <stdio.h>

int main()
{
    int x = 1;
    for(int i= 1; i <= 5; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("%d ",x);
            x++;
        }
        printf("\n");
    }
    return 0;
}
    
