#include<stdio.h>
#include <stdlib.h>
void main() 
{
char name[20];
int age,height;
FILE *f = fopen("person.txt", "w");
printf("Enter name , age and height");
scanf("%s %d %d",name,&age,&height);
fprintf(f,"Name=%s\t Age=%d\t Height%d\t",name,age,height);
fclose(f);
printf("The data from file are:");
FILE *fr = fopen("person.txt", "r");
fscanf(fr,"Name=%s\t Age=%d\t Height%d\t",name,&age,&height);
fclose(fr);
printf("Name=%s\t Age=%d\t Height%d\t",name,age,height);
getch();
}
