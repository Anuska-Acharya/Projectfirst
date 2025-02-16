#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("Enter three numbers");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b &&a<c)
	 printf("\n%d is middle no.",a);
	else if(b>a && b<c)
	 printf("\n%d is middle no.",b);
	else
	 printf("\n%d is middle no.",c);
	getch();
	return 0;
	 
}
