#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n[5],temp1,temp2;
	//Entering five elements
	for(i=0;i<5;i++)
	{
		printf("Enter a number");
		scanf("%d",&n[i]);
	}
	//Sorting in ascending order
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(n[i]>n[j])
			{
			temp1=n[i];
			n[i]=n[j];
			n[j]=temp1;
	     	}
			
		}
	}
	//displaying in ascending order
	printf("\n Ascending order:");
	for(i=0;i<5;i++)
	{
		printf("\n%d",n[i]);
	}
	//Sorting in descending order
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(n[i]<n[j])
			{
			temp1=n[i];
			n[i]=n[j];
			n[j]=temp1;
	     	}
			
		}
	}
	//displaying in descending order
	printf("\n descending order:");
	for(i=0;i<5;i++)
	{
		printf("\n%d",n[i]);
    }
	getch();
	return 0;
	
}
