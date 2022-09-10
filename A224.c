#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
	char *p,c;
	int i=0,j=1;
	p= (char*)malloc(sizeof(char));
	printf("Enter a string: ");
	
	while(c!='\n')
	{
		c=getc(stdin);
		j++;
		p= (char*)realloc(p,j*sizeof(char));
		p[i]=c;
		i++;
	}
	
	p[i]='\0';
	printf("\nEntered string is :- %s",p);
	free(p);
	getch();
}
