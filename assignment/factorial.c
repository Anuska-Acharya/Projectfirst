#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n;
	long fact=1;
	printf("Enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	 fact=fact*i;
    }
    printf("Factorial=%ld",fact);
    getch();
    return 0;
	 
}
