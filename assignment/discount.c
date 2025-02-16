#include<stdio.h>
#include<conio.h>
int main()
{
	float discount,famount;
    float bill=1000.5;
	discount=0.1*bill;
	famount=bill-discount;
	printf("Discount is %.2f and amount after discount is %.2f",discount,famount);
	getch();
	return 0;
	
}
