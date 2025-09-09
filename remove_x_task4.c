#include<stdio.h>
#include<string.h>
main()
{
	char str[100];
	gets(str);
	int i,j,k=0;
	for(i=0;str[i]!='\0';i++)
	{
		 //	printf("%d\n",i);
		while(str[i]=='x'||str[i]=='X')
		{
			for(j=i;str[j]!='\0';j++)
			{
				str[j]=str[j+1];
			}
		}
	}

	puts(str);
	int s,h=0;
	char d;
	for(i=0;str[i]!='\0';i++)
	{
		s=0;
		for(j=0;str[j]!='\0';j++)
		{
			if(str[i]==str[j])
			{
				s++;
			}
		}
		if(s>=h)
		{
			d=str[i];
		}
	}
	printf("%c  =  %d",d,s);
}
