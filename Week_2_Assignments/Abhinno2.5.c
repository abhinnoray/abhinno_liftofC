//Write a C program to copy the elements of one array into another way.

#include <stdio.h>
void arr_input(int *, int);
void arr_print(int *, int);
void arr_copy(int*, int*,int);
void arr_input(int *a, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("Enter element %d:",(i+1));
        scanf("%d",a);
        a++;
    }

}
void arr_print(int *a,, int n)
{
    for(int i = 0; i < n; i++)
    {
        if(i < n-1)
        {
            if(i == 0)
            {
                printf("[%d, ", *a);
                a++;
            }
            else
            {
                printf("%d, ",*a);
                a++;
            }

        }
        else
        {
            printf("%d]",*a);
            a++
        }
    }
}
void arr_copy(int *p1, int *p2,int n)
{
    for(int i = 0; i < n; i++)
    {
        *p2 = *p1;
        p1++;
        p2++;

    }
}
int main()
{
    int l;
    printf("Enter no of elements of array :");
    scanf("%d",&l);
    int a1[1];
    int *p1 = &(a1[0]);
    arr_input(p1,l);
    int a2[l];
    int *p2 = &(a2[0]);
    printf("Copying elements into second array....\n");
    arr_copy(p1, p2, l);
    printf("Second array = ");
    arr_print(p2, l);
    return 0;
}