#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float p,t,r,ci;
	printf("Enter principal, rate and time");
	scanf("%f %f %f",&p,&r,&t);
	ci=	p*(pow(1+(r/100),t)-1);
	printf("Compound interest=%f",ci);
	getch();
	return 0;
}     
