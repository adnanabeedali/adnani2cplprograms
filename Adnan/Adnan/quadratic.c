
#include<stdio.h>
#include<math.h>
int main()
{
 	float a,b,c,r1,r2,D,real,img;
	printf("Enter the coefficients of the quadratic equation:");
	scanf("%f %f %f",&a,&b,&c);
	if(a==0)
	{
		printf("Equation is linear.");
	}
	else
	{
 		D=b*b-4*a*c;
		if(D==0)
		{
			r1=r2=-b/(2*a);
			printf("\nRoots are real and equal.");
			printf("\nRoots are:%.2f and %.2f",r1,r2);
		}
		else if(D>0)
		{
			r1=(-b+sqrt(D))/(2*a);
			r2=(-b-sqrt(D))/(2*a);
			printf("\nRoots are real and distinct.");
			printf("\nRoots are:%.2f and %.2f",r1,r2);
		}
		else
		{
			real=-b/(2*a);
			img=sqrt(-D)/(2*a);
			printf("\nRoots are imaginary.");
			printf("\nFirst root is %.2f+i%.2f",real,img);
			printf("\nSecond root is %.2f-i%.2f",real,img);
		}
	}
return 0;
}
		
			
		 
