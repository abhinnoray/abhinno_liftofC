//Write a program to sort a given array using function.

#include<stdio.h>
void sort(int[,int]);
void arr_input(int *, int);
void swap(int*, int*);
void swap(int *a, int *b)
{
    int temp;
    temp=*b;
    *b=*a;
    *a=temp;
}
void arr_input(int *a, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("Enter element %d : ",(i+1));
        scanf("%d",a);
        a++;
    }

}
void sort(int a[], int n)
{
    for(int i = 0; i< n; i++)
    {
        int k;
        int min = a[i];
        int min1 = min;

        for(int j = i+1; j < n;j++)
        {
            if(a[j] <= min)
            {
                min = a[j];
                k = j;

            }

        }
        if (min != min1)
        {
            swap(&a[i],&a[k]);
        }


    }
}
int main()
{
    int l;
    printf("Enter number of elements of array :");
    scanf("%d",&l);
    int a[l];
    int *p = &(a[0]);
    arr_input(p,l);
    sort(a, l);
    printf("Sorted array is ...\n");
    for(int x = 0; x < l; x++)
    {
        printf("%d",a[x]);
    }

}

    