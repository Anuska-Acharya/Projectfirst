#include<stdio.h>
#include<conio.h>
int main()
{
	int num,i;
	printf("Enter a number");
	scanf("%d",&num);
	for(i=2;i<num ;i++)
	{
		if(num%i==0)
		{
			printf("\n Not prime");
		}
		break;
 }
	if(i==num && num%i==0)
	 printf("\n prime");
	getch();
	return 0;
}
