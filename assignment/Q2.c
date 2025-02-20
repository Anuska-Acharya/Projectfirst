#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{char c;
FILE *f=fopen("filec.txt","w");
if(f==NULL)
{printf("File cannot be created:");
exit(1);
}
printf("Enter the characters:");
fflush(stdin);
while((c=getchar())!='\n')
{fputc(c,f);
}
fclose(f);
getch();
}

