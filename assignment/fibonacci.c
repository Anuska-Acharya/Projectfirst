#include<stdio.h>
#include<conio.h>
int main()
{
	int n,a=0,b=1,c,i;
	printf("Enter no of terms");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\t",a);
		c=a+b;
		a=b;
		b=c;
		
		
	}
	getch();
	return 0;
	
}
