#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n;
	printf("Enter the value of n");
	scanf("%d",&n);
	for(i=n;i>=0;i--)
	  printf("%d\t",i);
	for(j=1;j<=n;j++)
	  printf("%d\t",j);
	getch();
	return 0;
}
