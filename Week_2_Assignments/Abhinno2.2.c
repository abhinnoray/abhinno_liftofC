//Take two array as input,merge them and print it in reverse order using loop
#include<stdio.h>

void arr_input( int *a, int n);
void arr_output_rev(int *a, int n);
void arr_input(int *a, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("Enter element %d : ",(i+1));
        scanf("%d",a);
        a++;
    }

}
void arr_output_rev(int *a, int n)
{

    for(int i = n-1; i >= 0; i--)
    {
        if( i > 0)
        {
            if( i == n-1)
            {
                printf("[%d, ",*a");
                a--;
                }
                else
                {
                    printf("%d, ",*a);
                    a--;
                    }
                    }
                    else
                    {
                        printf("%d]",*a);
                        a--;
                        }
                        }

                        }
                        int main()
                        {
                            int l1,l2;
                            printf("\n");
                            printf("Enter no of elements of first array : ");
                            scanf("%d",&l1);
                            int a1[l1];
                            int *p1 = &(a1[0]);
                            arr_input(p1,l1);
                            printf("\n");
                            printf("Enter no of elements of second array :");
                            scanf("%d",&12);
                            int a2[12];
                            int *p2 = &(a2[0]);
                            arr_input(p2,l2);

                            int l3 = l1+l2;
                            int a3[l3];
                            int *p3 = &(a3[l3-1]);
                            for(int i = 0; i < l3; i++)
                            {
                                if(i < l1)
                                {
                                    a3[i] = a1[i];
                                    }
                                    else
                                    {
                                        a3[i] = a2[i-l1];
                                        }
                                        }
                                        printf("\n");
                                        arr_output_rev(p3,l3);
                                        return 0;
                                        }
                        
                        
                        
                    



                
    