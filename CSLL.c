#include<stdio.h>
struct node
{
	int *data;
	struct node *next;
}*newnode,*temp,*start=NULL;
main()
{
	int c;
	do{
	printf("\nEnter the choice?");
	scanf("%d",&c);
	switch(c)
	{
		case 1:Create();
		break;
		case 2:Display();
		break;
		default:printf("\nEntered wrong choice");
	}
	}while(c!=1||c!=2);
}
void Create()
{
	int n,i;
	printf("\nEnter the size:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data");
	scanf("%d",&newnode->data);
	if(start==NULL)
	{
		newnode->next=newnode;
		start=temp=newnode;
	}
	else
	{
		temp->next=newnode;
		temp=newnode;
		temp->next=start;
	}
	}
	
}
void Display()
{
	temp=start;
	while(temp->next!=start)
	{
		printf("%d  ",temp->data);
		temp=temp->next;
	}
	printf("%d  ",temp->data);
	
	
}
