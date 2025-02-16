#include<stdio.h>
#include<conio.h>
int main()
{
	int n[10],i;
	printf("Enter 10 numbers");
	for(i=0;i<10;i++)
	{
		scanf("%d",&n[i]);
	}
	printf("The numbers are:");
	for(i=0;i<10;i++)
	{
	 printf("\n%d",n[i]);	
	}
	getch();
	return 0;
}
