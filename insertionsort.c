#include<stdio.h>
main()
{
	int a[100],i,n;
	printf("\nEnter the size of array:\n");
	scanf("%d",&n);
	printf("\nEnter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	insertionsort(a,n);
}
void insertionsort(int a[100],int n)
{
	int i,j,x;
	for(i=1;i<n;i++)
	{
		j=i-1;
		x=a[i];
			while(j>-1&&a[j]>x)
			{
			a[j+1]=a[j];
			j--;
			}
			a[j+1]=x;
	}
		for(i=0;i<n;i++)
		{
			printf("\t%d",a[i]);
		}
}
