#include<stdio.h>
#include<conio.h>
int main()
{
	int num,n1,n2,i;
	printf("Enter values of n1 and n2");
	scanf("%d %d",&n1,&n2);
	for(num=n1;num<=n2;num++)
	{
		for(i=n1;i<num;i++)
		{
			if(num%i==0)
			 break;
		}
		if(i==num)
		{
			printf("%d\t",num);
		}
	}
	getch();
	return 0;
}
