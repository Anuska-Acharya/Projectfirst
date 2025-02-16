#include<stdio.h>
#include<conio.h>
int main()
{
	float cent,far;
	printf("Enter the temperature in centigrade");
	scanf("%f",&cent);
	far=(cent/100)*180+32;
	printf("The temperature in fahrenheit is %f",far);
	getch();
	return 0;
}
