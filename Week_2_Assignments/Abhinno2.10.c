\\Write a program to find the total number of alphabets,digits and special characters in a string.

#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int n_a=0,n_d=0,n_c=0;
    printf("Enter string : ");
    gets(str);
    //scanf("%s",&str);
    int l = strlen(str);
    for(int i = 0; i < 1; i++)
    {
        char c = str[i];
        int x = (int)c;
        if(( x >= 97 && x <= 122) || ( x >= 65 && x <= 90))
        {
            n_a++;
        }
        else if( x >= 48 && x <= 57)
        {
            n_d++;
        }
        else
        {
            n_c++;
        }
    }
    printf("No of alphabets = %d.\n",n_a);
    printf("No of digits = %d.\n",n_d);
    printf("No of special characters = %d.\n",n_c);
    return 0;
}
