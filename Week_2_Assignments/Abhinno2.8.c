\\Write a program to find the number of vowels and constants in a string.

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int n_v = 0,n_c = 0,1;

    printf("Enter string : ");
    gets(str);
    l = strlen(str);

    for(int i = 0; i < l; i++)
    {
        char c = str[i];
        int x = (int)c;

        if(( x >= 97 && x<= 122) || ( x >= 65 && x <= 90))
        {
            if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='0' || c=='U')
            {
                n_v++;


            }
            else
            {
                n_c++;

            }
        }

    }
    printf("No of vowels = %d.\n",n_v)
    printf("No of constants = %d.\n",n_c);

    return 0;
} 


