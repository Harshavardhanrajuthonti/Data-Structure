#include<stdio.h>
int i,n,j,k;
main()
{
	char ht[10][10];
	printf("\n Enter the size of the arrey:\n");
	scanf("%d",&n);
	printf("\n Please enter the hallticket number:\n");
	for(i=0;i<n;i++)
	scanf("%s",ht[i]);
	for(i = 0; i < n; i++)
	{
		for(j = i; j < n; j++)
		{
			for(k = 0; ht[j][k]&& ht[i][k] != '\0'; k++)
			{
				if(ht[j][k]>ht[i][k])
				{
					char str[10];
					strcpy(str,ht[j]);
					strcpy(ht[j],ht[i]);
					strcpy(ht[i],str);
				}
			}
		}
			
	}
	for(i = 0; i < n; i++)
	printf("%s   ",ht[i]);
}
