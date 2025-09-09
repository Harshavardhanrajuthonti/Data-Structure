#include<stdio.h>
main()
{
	int i,j,n,a[10];
	printf("\nEnter the size of array:\n");
	scanf("%d",&n);
	printf("\n Enter the marks of the Student:\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	int cmp;
	for(i=0;i<n;i++)
	{
	for(j=0;j<n-i-1;j++)
		{
		if(a[j]>a[j+1])
			{
				int t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
				cmp++;
		
				
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d  ", a[i]);
	}
	printf("\n The comparision taken to arrange in Ascending order is %d", cmp);
}
