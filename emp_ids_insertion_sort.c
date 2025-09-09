#include<stdio.h>
main()
{
	int i,j,n,a[100];
	printf("\nEnter the sizeof array:\n");
	scanf("%d",&n);
	printf("\nEnter the employee id's :\n");
	scanf("%d",&a[i]);
	for(i=1;i<n;i++)
	{
		j=i-1;
		int x=a[i];
		while(j>=0&&a[j]>x)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=x;
	}
		printf("\nprint the sorted elements:\n");
		for(i=0;i<n;i++)
		printf("%d  ",a[i]);
}
