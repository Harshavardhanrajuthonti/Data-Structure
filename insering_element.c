#include<stdio.h>
main()
{
	int a[100],i,n,num,pos;
	printf("\n enter the size of array");
	scanf("%d",&n);
	printf("\n Enter the elements in array \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n Enter the position");
	scanf("%d",&pos);
	printf("\n Enter the number");
	scanf("%d",&num);
	for(i=n;i>pos;i--)
	{
		a[i]=a[i-1];
	}
	a[pos] = num;
	for(i=0;i<=n;i++)
	printf("%5d",a[i]);
}
