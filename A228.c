#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
	int *p;
	p= (int*)malloc(sizeof(int));
	*p=5;
	printf("Before freeing 'p' pointer:- %d\n",*p);
	free(p);
	printf("\nAfter freeing 'p' pointer:- %d",*p);
	getch();
}
