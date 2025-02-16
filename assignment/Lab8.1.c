#include<stdio.h>
#include<conio.h>
int main()
{
	int *a,*b,*c,v1=1,v2=2,v3=3;
	a=&v1;
	b=&v2;
	c=&v3;
	if(*a>*b&&*a>*c)
	{
		printf("%d is the greatest",*a);
	}
	else if(*b>*a && *b>*c)
	{
		printf("\n%d is greatest",*b);
	}
	else
	{
		printf("\n%dis the greatest",*c);
	}
	getch();
	return 0;
	
}
