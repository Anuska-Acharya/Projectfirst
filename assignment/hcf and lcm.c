#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d,hcf,lcm,temp;
	printf("Enter any two numbers");
	scanf("%d %d",&c,&d);
	a=c;
	b=d;
	while(b!=0)
	{
		temp=b;
		b=a%b;
		a=temp;
	}
	hcf=a;
	lcm=(c*d)/hcf;
	printf("\nThe hcf of %d and %d is %d",c,d,hcf);
	printf("\nThe lcm of %d and %d is %d",c,d,lcm);
	getch();
	return 0;
}
