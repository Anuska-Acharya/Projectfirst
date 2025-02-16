#include<stdio.h>
#include<conio.h>
int main()
{
	int mat[2][3]={{1,2,3},{4,5,6}},i,j;
	for(i=0;i<2;i++)
	{
		printf(" \nRow number %d",i);
		for(j=0;j<3;j++)
		{
			printf("\t%d",mat[i][j]);
		}
	}
	getch();
	return 0;
	
}
