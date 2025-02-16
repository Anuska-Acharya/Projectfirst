#include<stdio.h>
#include<conio.h>
int main()
{
	char c;
	printf("Enter a character");
	scanf("%c",&c);
	if(c>=65 && c<=90)
	{
	 printf("\nIt is in uppercase");
	 c=c+32;
	 printf("\nEquivalent lowercase is %c",c);
    }  
	else if(c>=97 && c<=122)
	{
	 printf("\nIt is in lowercase");
	 c-=32;
	 printf("\nEquivalent uppercase is %c",c);
    } 
	else
	{
	printf("\n Invalid input");
    }  
	getch();
	return 0;
}
