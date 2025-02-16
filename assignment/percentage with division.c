#include<stdio.h>
#include<conio.h>
int main()
{
	float m1,m2,m3,p;
	printf("Enter the marks in 3 subjects");
	scanf("%f %f %f",&m1,&m2,&m3);
	p=(m1+m2+m3)/3;
	printf("\nPercentage=%f",p);
	if(p>=80)
	 printf("Distinction");
	else if(p>=60 && p<80)
	 printf("First division");
	else if(p>=45 && p<60)
	 printf("Second division");
	else if(p>=32 && p<45)
	 printf("Third division");
	else
	 printf("Fail");
	getch();
	return 0;
}
