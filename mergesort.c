#include<stdio.h>
void mergesort(int a[] ,int low, int high);
main()
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		mergesort(a,low,mid);
		mergesort(a,mid+1,high);
		mergesort(a,low,mid,high);
	}
	
}
void merge(int a[] ,int low, int mid ,int high)
{
	int i,j,b[100];
	i=low;
	j=mid+1;
	k=low;
	while(i<=mid && j<=high)
	{
		if(a[i]<a[j])
		{
			b[k]=a[i];
			i++;
			k++;
		}
		else
		{
			b[k]=a[j];
			j++;
			k++;
		}
		
	}
	while(i<=mid)
	{
		b[k]=a[i];
		k++;
		i++;
	}
	while(j<=high)
	{
		b[k]=a[j];
		k++;
		j++;
	}
	for(i=low;i<=high;i++)
	{
		a[i]=b[i];
	}
	
}
int main()
{
	int i,j,mid,a[100];
	printf("\nEnter the size of array:\n");
	scanf("%d",&n);
	printf("\nEnter the array elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	
}

