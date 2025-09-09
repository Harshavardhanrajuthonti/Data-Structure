#include<stdio.h>
int i,k=0;
main()
{
	int a[10],n;
	printf("\n Enter the size of the array\n");
	scanf("%d",&n);
	printf("\n Enter the elements in array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("\n Enter the key element\n");
	int key;
	scanf("%d",&key);
	k=search(a,key,n);
	printf(" %d",a[k]);
}
void search(int a[10], int key, int n)
{
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		return i;
		else
		return 0;
	}
}
