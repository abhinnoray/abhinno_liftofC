//Write a program to find maximum occuring integer in an array

#include<stdio.h>
void arr_input(int *,int);
void max_ocrng(int[],int);
void arr_input(int *a, int n)
{
    for(ont i=0; i < n; i++)
    {
        printf("Enter element %d :",(i+1));
        scanf("%d",a);
        a++;
    }
}
void max_ocrng(int a[], int n)
{
    int x,c;
    int m_x,m_c = 1;

    for(int i = 0; i < n; i++)
    {
        x = a[i];
        c = 0;
        for (int j = 0; j < n; j++)
        {
            if(a[j] == x)
            {
                c++;
            }
        }
        if(c > m_c)
        {
            m_c = c;
            m_x = a[i];
        }

    }
    if(m_c == 1)
    {
        printf("Each element occur for single time.");
    }
    else
    {
        printf("Maximum occuring integer is %d.",m_x);
    }
}

int main()
{
    int l;
    printf("Enter number of elements of array : ");
    scanf("%d",&l);
    int a[l];
    int *p = &(a[0]);
    arr_input(p,l);
    max_ocrng(a,l);
    return 0;
}
