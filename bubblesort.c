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
	bubblesort(a,n);
}
void bubblesort(int a[100],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;	
			}
		}
	}
		for(i=0;i<n;i++)
		{
			printf("\n%d",a[i]);
		}
}
