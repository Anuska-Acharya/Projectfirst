#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct bct{
	int roll,age;
	char name[20],address[20];
	int phy,c,mat;
}b[3];
void main()
{int i,av[3];
FILE *f=fopen("student.txt","w+b");
if(f==NULL)
{printf("File cannot be created:");
exit(1);
}
for(i=0;i<3;i++)
{printf("Enter roll,age and marks in phy c and maths:");
scanf("%d%d%d%d%d",&b[i].roll,&b[i].age,&b[i].phy,&b[i].c,&b[i].mat);
printf("Enter name and adress:");
scanf("%s %s",b[i].name,b[i].address);
av[i]=(b[i].phy+b[i].c+b[i].mat)/3;
}
printf("Writing information to the file");
fwrite(&b,sizeof(b),3,f);
rewind(f);
printf("The student details are:\n");
for(i=0;i<3;i++)
{printf("Name: %s \t Address:%s\t Roll no:%d\t Age:%d\t Physics:%d\t C:%d\t Maths:%d\t,Average:%d\t \n",b[i].name,b[i].address,b[i].roll,b[i].age,b[i].phy,b[i].c,b[i].mat,av[i]);
}
fclose(f);
getch();
}

