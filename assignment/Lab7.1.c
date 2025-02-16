#include<stdio.h>
#include<conio.h>
int main()
{
	float n[10];
	int i;
	printf("Enter ten numbers");
	for(i=0;i<10;i++)
	{
		scanf("%f",&n[i]);
		printf("\n%f",n[i]);
	}
	getch();
	return 0;
	
}
