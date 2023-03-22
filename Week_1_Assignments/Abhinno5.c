\\Write a C program to enter the radius of a circle and find its diameter,circumference and area.

# include <stdio.h>
int main()
{
    float r,d,c,a;
    printf("enter the radius of the circle");
    scanf("%f", &r);
    d = r*2;
    c = 2*3.14159*r;
    a = 3.14159*r*r;
    printf("\n");
    printf("Diameter of the circle is %f.\n",d);
    printf("Circumference of the circle is %f.\n",c);
    printf("Area of the circle is %f.\n",a);
}