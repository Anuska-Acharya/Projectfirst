#include<stdio.h>
#include<conio.h>
int main()
{
	int n1,n2,sum=0,count=0,rem,i;
	printf("Enter two numbers");
	scanf("%d %d",&n1,&n2);
	if(n1>n2)
	 printf("Enter no such that n1<n2");
	else
	{
		for(i=n1+1;i<n2;i++)
		{
			if(i%7==0)
		    	{
					count=count+1;
					sum=sum+i;
				
			}
			printf("No. of digits=%d",count);
        	printf("sum of digits=%d ",sum);
		}
	}
	
	getch();
	return 0;
	 
}
