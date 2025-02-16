#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float a,b,c,r1,r2,discriminant;
	printf("Enter the coefficients of x^2,x and constant");
	scanf("%f %f %f",&a,&b,&c);
	discriminant=pow(b,2)-4*a*c;
	r1=(-b+sqrt(discriminant))/(2*a);
	r2=(-b-sqrt(discriminant))/(2*a);
	printf("\n the roots are %f and %f",r1,r2);
	getch();
	return 0;
	
}
