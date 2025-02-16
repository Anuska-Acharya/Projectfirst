#include<stdio.h>
#include<conio.h>
int main()
{
	float a,b,result;
	char choice;
	printf("Enter two operands:\t");
	scanf("%f %f",&a,&b);
	printf("\n Enter one operator among +,-");
	scanf("%c",&choice);
	switch(choice)
	{
		case '+':
		    result=a+b;
		    printf("\nSum is %f",result);
	    	break;
		case '-':
			result=a-b;
			 printf("\nDifference is %f",result);
			break;
		default:
			printf("\nInvalid");
			
	}
	getch();
	return 0;
}
