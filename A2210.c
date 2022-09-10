#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
	int *p,n,i,j,temp;
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
		
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(p[j]<p[j+1])
			{
				temp=p[j];
				p[j]=p[j+1];
				p[j+1]=temp;
			}
		}
	}
	printf("Largest element is %d\n",p[n-n]);
	printf("\nSmallest element is %d",p[n-1]);
	free(p);
	getch();
}
