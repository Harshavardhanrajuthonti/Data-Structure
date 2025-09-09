#include<stdio.h>
#include<math.h>
main()
{
	int n,m,k;
	printf("\n Enter the two different numbers:\n");
	scanf("%d%d",&n,&m);
	k=gcd(n,m);
	int s=sqrt(k);
	printf("\n Square of gcd is %d",s);
	
}
int gcd(int a,int b)
{
	if(b==0)
	return a;
	else
	return gcd(b,a%b);
}
