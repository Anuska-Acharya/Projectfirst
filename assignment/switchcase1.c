#include<stdio.h>
#include<conio.h>
int main()
{
	int choice;
	printf("\n Select 1 for file, 2 for edit and 3 for save");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("\n File menu item");
			break;
		case 2:
			printf("\n edit menu");
			break;
		case 3:
			printf("\n Save menu");
			break;
		default:
			printf("\n Invalid item");
	}
	getch();
	return 0;
}
