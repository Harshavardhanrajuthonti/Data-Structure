#include<stdio.h>
int search(int,int[],int,int,int);
main()
{
	int n,a[100],i,j;
	printf("\nEnter the size of array:\n");
	scanf("%d",&n);
	printf("\nEnter the elements:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[j]>a[i])
			{
				int t=a[j];
				a[j]=a[i];
				a[i]=t;
			}
		}
	}
	printf("\nprint the elements:\n");
	for(i=0;i<n;i++)
	{
	printf("\n%d",a[i]);
	}
	//int l=0;
	int key;
	printf("\nEnter the key value:\n");
	scanf("%d",&key);
	int k=search(n,a,key,0,n-1);
	printf("\n position of key value a[%d] is %d",k,k);
}
int search(int n,int a[100],int key,int l,int h)
{
	printf("\n l value %d h value %d ",l,h);
	int mid=(l+h)/2;
	while(l<=h)
	{
	if(key==a[mid])
	return mid;
	else
	{
		if(a[mid]>key)
		{
		return search(n,a,key,mid+1,h);
		}
		else if(a[mid]<key)
		{
		return search(n,a,key,l,mid-1);
		}
		else
		{
	    return 0;
		}		
	}	
	}
}
