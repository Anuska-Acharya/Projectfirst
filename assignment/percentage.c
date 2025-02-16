#include<stdio.h>
#include<conio.h>
int main()
{
	char name[15];
	float m1,m2,m3,m4,m5,per;
	printf("Enter the name of the student");
	scanf("%s",name);
	printf("\nEnter the marks in five subjects");
	scanf("%f %f %f %f %f",&m1,&m2,&m3,&m4,&m5);
	per=(m1+m2+m3+m4+m5)/5;
	printf("Percentage=%f",per);
	getch();
	return 0;
}
