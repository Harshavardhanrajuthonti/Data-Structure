/*WRITE A PROGRAM TO STORE 1ST YR PERCENT OF STUDENTS INTO AN ARRAY.
 write a c  function program for sorting array of floating point number in asscending order using.
 1.bubble sort
 2.insertion sort.*/
#include<stdio.h>
int i,j,p;
main()
{
	int n,i;
	printf("\nEnter the size of array:\n");
	scanf("%d",&n);
	 float a[100];
	 printf("\nENter the marks of the students:\n");
	for(i = 0; i < n ; i++)
	scanf("%f",&a[i]);
	do
	{
	printf("\n1.BUBBLE SORT\n2.INSERTION SORT\n");
	int s;
	scanf("%d",&s);
	switch(s)
	{
		case 1:
			Bubble_sort(a,n);
			break;
		case 2:
			Insertion_sort(a,n);
			break;
		default:
			printf("\nEntered a wrong choice:\n");
			
	}
	printf("\n Enter 'yes' to continue AGAIN!..\n");
	char str[4];
	char str2[4]="yes";
	scanf("%s",str);
	int p=strcmp(str,str2);
	}while(p==0);

}
void Bubble_sort(float a[100],int n)
{
	for(i=0;i<n;i++)
	{
	for(j=0;j<n-i-1;j++)
		{
		if(a[j]>a[j+1])
			{
				float t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("\nprint the sorted elements:\n");
	for(i=0;i< n;i++)
	{
		printf("  %f" ,a[i]);
	}
}
void Insertion_sort(float a[100], int n)
{
	for(i=1;i<n;i++)
	{
		j=i-1;
		float x=a[i];
		while(j>-1&&a[j]>x)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=x;
		}
		printf("\nprint the sorted elements:\n");
		for(i=0;i<n;i++)
		printf("%f  ",a[i]);
			
}
