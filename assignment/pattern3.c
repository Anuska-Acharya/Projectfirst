#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*\t");
		}
		printf("\n");
	}
	for(i=3;i>=1;i--)
	{
		for(k=1;k<=i;k++)
		{
			printf("*\t");
		}
	printf("\n");
	}
	getch();
	return 0;
}
