#include<stdio.h>
#include<conio.h>
int main()
{
	float p,t,r,si,total,emi,amount=19000;
	printf("Enter principal, time and rate");
	scanf("%f %f %f",&p,&t,&r);
	si=(p*t*r)/100;
	total=amount+si;
	emi=total/24;
	printf("Monthly installment emi is %f",emi);
	getch();
	return 0;
	
}
