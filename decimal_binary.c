#include<stdio.h>
main()
{
	int n,s[100],i=0,j;
	printf("\nEnter the decimal number");
	scanf("%d",&n);
	while(n!=0)
	{
		s[i]=n%2;
		n=n/2;
		i++;
	}
	printf("\n binary number\n");
	for(j=i-1;j>=0;j--)
	printf("%d",s[j]);
}
