//Write a program to move all the negative elements to one side of the array.

#include<stdio.h>
void swap(int*, int*);
void arr_input(int *a, int n);
void arrange(int a[], int n);
void arr_print(int *a, int n);
void swap(int *a,int *b)
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
void arrange(int a[], int n)
{
    int l = n;
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0;j < l-i-1; j++)
        {
            if (a[j] < 0 && a[j+1] > 0)
            {
                swap(&a[j],&a[j+1]);
            }



        }

    }
}
void arr_print(int *a, int n)
{
    for(int i = 0; i < n; i++)
    {
        if( i < n-1)
        {
            if( i == 0)
            {
                printf("%d, ",*a);
                a++;
            }

        }
        printf("%d, ",*a);
        a++;
    }

}
else
{
    printf("%d]",*a);
    a++;
}
}
}
int main()
{
    int n;
    printf("Enter no of elements of of the array : ");
    scanf("%d",&n);
    int a[n];
    int *p = &a[0];
    arr_input(p,n);
    arrange(a,n);
    printf("Moving negative elemenets to one side of the array...\n\nFinal array is");
    arr_print(p,n);



}





