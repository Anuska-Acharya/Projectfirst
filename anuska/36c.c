#include<stdio.h>
#include<conio.h>
void main()
{int i,j,n=4;
for(i=1;i<=n;i++)
{for(j=1;j<=i;j++){
	printf("*\t");
}
printf("\n");
}
for(i=n;i>=1;i--)
{for(j=1;j<=i;j++){
	printf("*");
}
printf("\n");
}


getch();
}
