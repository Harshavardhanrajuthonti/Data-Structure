/*A comerce student of a colleg edoing analysis on the monthily salaries of amplyees of an organisation.
In tthis analysis he need to print 
what is the maximum & minimum salary and count of max and min salary af an employee an d differnce.*/
#include<stdio.h>
int h=0,q=0;
main()
{
	int n;
	printf("\nEnter the size of the array:\n");
	scanf("%d",&n);
	int i,a[n],j;
	printf("\nEnter the salary of employees\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	int min=a[0];
	for(i=0;i<n;i++)
	{
			if(a[i]<min)
			min=a[i];
	}
	printf("\nMinimum salary of the employee is %d",min);
	for(i=0;i<n;i++)
	{
		if(min==a[i])
		{
		 h++;
		}
	}
	if(h>=2)
	printf("\n%d has Minimum salary ",h);
	int max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
	}
	printf("\nMaximum salary of the employee is %d",max);
	for(i=0;i<n;i++)
	{
		if(max==a[i])
		{
		 q++;
		}
	 
	}
	if(q>=2)
	printf("\n%d has Maximum salary ",q);
	printf("\nThe differnce of the maximum and minimum is %d",max-min);
	
}
