#include<stdio.h>
#include<conio.h>
int main()
{
	
	float n[10],greatest,smallest;
	int i;
	for(i=0;i<10;i++)
	{
		printf("Enter a number");
		scanf("%f",&n[i]);
		
	}
	//initializing greatest and smallest as first element
	greatest=smallest=n[0];
	// Finding greatest and smallest
	for(i=1;i<10;i++)
	{
		if(n[i]>greatest)
		 greatest=n[i];
		if(n[i]<smallest)
		 smallest=n[i];
	}
	//Displaying section
	printf("The largest number is %f",greatest);
	printf("The smallest number is %f",smallest);
	getch();
	return 0;
	

}
