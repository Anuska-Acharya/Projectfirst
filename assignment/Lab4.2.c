#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,greatest,smallest;
	printf("Enter three numbers");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c)
	 greatest=a;
	else if(b>a && b>c)
	 greatest=b;
	else
	 greatest=c;
	printf("\nGreatest=%d",greatest);
	if(greatest%2==0)
	 printf("\nEven");
	else
	 printf("\nOdd");
	if(a<b && a<c)
	 smallest=a;
	else if(b<a && b<c)
	 smallest=b;
	else
	 smallest=c;
	printf("Smallest=%d",smallest);
	if(smallest%2==0)
	 printf("\nEven");
	else
	 printf("\nOdd");
	
}
