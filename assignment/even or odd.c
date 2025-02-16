#include<stdio.h>
#include<conio.h>
int main()
{
	int num;
	printf("Enter a number");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
	getch();
	return 0;
}
