#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,sum=1;
	printf("Enter the value of n");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	 	sum+=(i-1)*i;
	 	printf("Sum of 1+2x1+3x2+......+n*n-1=%d",sum);
	getch();
	return 0;
	 
}
