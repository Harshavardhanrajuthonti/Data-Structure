#include<stdio.h>
int h,p;
main()
{
	int n;
	printf("\nEnter the size of the array:\n");
	scanf("%d",&n);
	int a[n],i,j;
	printf("\nEnter the Student hallticket Numbers\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(a[j]<a[i])
			{
				int t = a[j];
				a[j]  = a[i];
				a[i]  = t;
			}	
		}
	}
	printf("\n Sorted Student hallticket Numbers \n");
	for(i=0;i<n;i++)
	printf("%3d  ",a[i]);
	do
	{
	printf("\n Enter choice \n1.Linear search\n2.Binary search\n");
	int s;
	scanf("%d",&s);
	switch(s)
	{
		case 1:
		Linear_search(a,n);
		break;
		case 2:
			printf("\nEnter the Hallticket Number :\n");
			int key;
			scanf("%d",&key);
		int k=Binary_search(n, a, key, 0, n - 1);
		if(k>=0)
		 printf("\nThe Student attended the program and at a[%d] position", k);
   		 else
    	printf("\n Student not attended the program\n");
		break;
		default:
			printf("\n Entered a wrong choice\nPlease enter a valid choice");
	}
	printf("\n Enter 'yes' to continue AGAIN!..\n");
	char str[4];
	char str2[4]="yes";
	scanf("%s",str);
	int p=strcmp(str,str2);
	}while(p==0);
}
void Linear_search(int a[100], int n)
{
	printf("\nEnter the Hallticket Number\n");
	int key;
	scanf("%d",&key);
	int i;
	for(i=0;i<n;i++)
	{
		if(key==a[i])
		{
			h=1;
			break;
		}
		else
		{
		h=0;
		}
	}
	if(h==1)
	printf("\n The Student attended the program at a[%d] place",i);
	else
	printf("\n The %d is not attended to th program",key);
	
}
int Binary_search(int n, int a[100], int key,int l, int h)
{
	if(h>=l)
	{
		int mid = (l+h)/2;
		if(a[mid] == key)
		return mid;
		else if( a[mid] < key)
		return Binary_search(n,a,key,mid+1,h);
		else 
		return Binary_search(n,a,key,l,mid-1);
	}
	else
	return -1;
}
