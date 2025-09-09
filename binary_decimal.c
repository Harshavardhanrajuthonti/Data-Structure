#include<stdio.h>
#include<math.h>
main()
{
	int n,s,sum=0;
	static int i;
	printf("\n Enter the number in binary format:\n");
	scanf("%d",&n);
	while(n!=0)
	{
	sum=sum+(n%10)*pow(2,i++);
	n=n/10;
	}
	printf("\n decimal number %d",sum);
	
}
