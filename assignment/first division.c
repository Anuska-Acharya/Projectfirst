#include<stdio.h>
#include<conio.h>
int main()
{
	float persee,perslc;
	printf("Enter your percentage for both see and slc");
	scanf("%f %f",&persee,&perslc);
	if(persee>=60&&perslc>=60)
	{
		printf("Congratulations you have first division in both see and slc");
	}
	getch();
	return 0;
}
