#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
	int *p,n;
	printf("Enter a numbers: ");
	scanf("%d",&n);
	
	p= (int*)malloc(n);
	free(p);
	getch();
}
