#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float num,floor_value,ceiling_value;
	printf("Enter a floating point number");
	scanf("%f",&num);
	floor_value=floor(num);
	ceiling_value=ceil(num);
	printf("\n Floor value=%.2f",floor_value);
	printf("\n Ceiling value=%.2f",ceiling_value);
	getch();
	return 0;
	
}
