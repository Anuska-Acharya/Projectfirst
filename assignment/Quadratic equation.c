#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float a,b,c,r1,r2,d;
	printf("Enter the values of coefficients of x^2,x and constant respectively");
	scanf("%f %f %f",&a,&b,&c);
	d=sqrt(b*b-4*a*c);
	r1=(-b+d)/2*a;
	r2=(-b-d)/2*a;
	printf("The roots are %f and %f",r1,r2);
	getch();
	return 0;
	
	
}
