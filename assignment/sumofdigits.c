#include<stdio.h>
#include<conio.h>
int main()
{
	int n,rem,sum=0;
	printf("Enter a number");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	printf("Sum of digits in the number is %d",sum);
	getch();
	return 0;
}
