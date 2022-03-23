#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c,r1,r2,d;
printf("Enter the coefficient of x^2:");
scanf("%f",&a);
printf("Enter the coefficient of x:");
scanf("%f",&b);
printf("Enter the constant:");
scanf("%f",&c);
d=b*b-4*a*c;
r1=-b+((d)^1/2)/2*a;
r2=-b-((d)^1/2)/2*a;
printf("The first root is %f",r1);
printf("The second root is %f",r2);
}


