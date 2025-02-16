#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n;
	printf("Enter the value of n");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	 printf("%d/%d\t",i-1,i);
	getch();
	return 0;
}
