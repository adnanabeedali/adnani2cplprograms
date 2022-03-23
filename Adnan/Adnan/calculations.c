#include<stdio.h>
int main()
{
int num1,num2,sum,sub,mul,div;
printf("Enter first number");
scanf("%d",&num1);
printf("Enter second number");
scanf("%d",&num2);
sum=num1+num2;
sub=num1-num2;
mul=num1*num2;
div=num1/num2;
printf("Sum is %d\n",sum);
printf("Difference is %d\n",sub);
printf("Product is %d\n",mul);
printf("Quotient is %d\n",div);
return 0;
}

