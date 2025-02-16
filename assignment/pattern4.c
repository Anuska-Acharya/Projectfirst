#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k=0;
	for(i=1;i<=6;i++)
	{
	k=i;
		for(j=1;j<=i;j++)
		{
			printf("%d\t",k++);
		}
	printf("\n");
	}
	getch();
	return 0;
}
