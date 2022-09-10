#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
	int *p,n,i,sum=0;
	printf("How many numbers you want to enter: ");
	scanf("%d",&n);
	p= (int*)calloc(n,sizeof(int));
	 
	if(p==NULL)
	{
		printf("Memory Allocation Failed");
		return 0;
	}
	printf("\nEnter %d numbers: ",n);
	for(i=0;i<n;i++)
		scanf("%d",p+i);
		
	for(i=0;i<n;i++)
		sum+=p[i];
			
	printf("\nAverage of data values is %d",sum/n);
	free(p);
	getch();
}
