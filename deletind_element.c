#include<stdio.h>
main()
{
	int a[100],n,num,pos,i;
	printf("\n enter the size of array");
	scanf("%d",&n);
	printf("\n Enter the elements in array \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n Enter the position");
	scanf("%d",&pos);
	for(i=pos;i<n;i++)
	{
		a[i]=a[i+1];
	}
	for(i=0;i<n-1;i++)
	printf("%5d",a[i]);
}
