#include<stdio.h>
#include<conio.h>
int main()
{
	float mop,moc,mom,moe,mob,total,per,rank;
	printf("Enter the marks for physics,chemistry,maths,english and biology");
	scanf("%f %f %f %f %f",&mop,&moc,&mom,&moe,&mob);
	total=mop+moc+mom+moe+mob;
	per=total/5;
	if(per<40)
	{
		printf("\nRank=fail");
	}
	else if(per>40 && per<=55)
	 printf("\nPass and third division");
	else if(per>55&&per<=65)
	 printf("\nSecond division");
	else if(per>65&&per<=80)
	 printf("\n First division");
	else if(per>80&&per<=95)
	 printf("\n Distinction ");
	else
	 printf("\n Outstanding");
	getch();
	return 0;
	
}
