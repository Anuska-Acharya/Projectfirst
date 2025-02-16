#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("Enter a number");
	scanf("%d",&n);
	if((n%5)==0&&(n%7)==0&&(n%11)!=0)
	{
		printf("\n The number %d is multiple of 5, divisible by 7 but not divisible by 11",n);
	}
	else
	 printf("\n None");
	getch();
	return 0;
}
