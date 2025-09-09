#include<stdio.h>
main()
{
	int a[10],i,n,j,key,t;
	printf("\nEnter the size of array:\n");
	scanf("%d",&n);
	printf("\nEnter the elements:\n");
		for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=a[i];
			}
		}
	}
	int k;
	k=search(a,n);
	printf("\nThe key element position is %d",k);
}
int search(int a[10], int n)
{
	int key,m,i;
	printf("\nEnter the key element:\n");
	scanf("%d",&key);
	m=(i+n-1)/2;
	if(key==a[m])
	return m;
	else
	return 0;
}
