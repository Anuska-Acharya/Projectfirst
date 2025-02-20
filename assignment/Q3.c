#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{char c;
int n=0,s=0;
FILE *f=fopen("filec.txt","r");
if(f==NULL)
{printf("File cannot be created:");
exit(1);
}
printf("The characters from the file is : \n" );
while((c=fgetc(f))!=EOF)
{
putchar(c);

n++;
if(c==' ')
{s++;
}
}

printf("\nThe number of characters is %d",n-s);
fclose(f);
getch();
}

