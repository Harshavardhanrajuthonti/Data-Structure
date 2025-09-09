#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
	
}*newnode,*temp,*start=NULL;
main()
{
	create();
	insert_at_beg();
	insert_at_end();
	display();
	
}
int create()
{
	int n,i;
	printf("\n Enter the size");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		newnode=(struct node *)malloc(sizeof(struct node));
		printf("\n Enter the data");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		if(start==NULL)
		{
			start=newnode;
			temp=newnode;
			
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
		
	}
}
int display()
{
	temp=start;
	while(temp!=NULL)
	{
		printf("\n%d",temp->data);
		temp=temp->next;
	}
}
int insert_at_beg()
{
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter the data");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(start==NULL)
	{
		start=newnode;
	}
	else
	{
		newnode->next=start;
		start=newnode;
	}
}
int insert_at_end()
{
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter the data");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(start==NULL)
	{
		start=newnode;
	}
	else
	{
		temp=start;
		while(temp->next!=NULL)
		{
			temp=temp->next;
			
		}
		temp->next=newnode;
	}
}
