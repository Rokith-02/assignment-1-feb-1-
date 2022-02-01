#include<stdio.h>
#define pi 3.14
double area(double r,double a)
{
        printf("area formula:pi*r*r\n");
        a=pi*(r*r);
        return a;
}
double circumference(double r,double c)
{
        printf("circumference formula:2*pi*r\n");
        c=2*pi*r;
        return c;
}
int main()
{
        double r,a,c;
        printf("enter the radius of the circle\n");
        scanf("%lf",&r);
        printf("area:%0.2lf\n",area(r,a));
        printf("\n");
        printf("circumference:%0.2lf\n",circumference(r,c));
}
