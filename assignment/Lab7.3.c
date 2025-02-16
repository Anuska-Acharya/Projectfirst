#include<stdio.h>
#include<conio.h>
int main()
{
	int n[8],sum=0,i;
	float average;
	for(i=0;i<8;i++)
	{
		printf("Enter a number");
		scanf("%d",&n[i]);
		sum=sum+n[i];
	}
	printf("\nThe sum is %d",sum);
	average=sum/8;
	printf("\n The average is %f",average);
	getch();
	return 0;
}
