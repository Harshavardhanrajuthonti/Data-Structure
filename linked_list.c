#include<stdio.h>
#include<stdlib.h>
char o;
int key;
struct node
{
	int data;
	struct node *next;
	
}*newnode,*temp,*start=NULL;
int main()
{
	int choice;
	printf("\n ****Singly Linear Linked list****\n");
	do
	{
		printf("\n 1.Create \n 2.Display \n 3.Insert \n");
		
		printf("\n Enter ur Choice:");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:create(); 
			break;
			case 2:display(); 
			break;
			case 3:insert();
			break;
			default:
				printf("\nEntered wrong choice..");
			
		}
		printf("\n Enter 'o' to continue..");
	
		scanf(" %c",&o);
	}while(o=='o');
	
}
void create()
{
	int n,i;
	
	printf("\nEnter the no. of data to create..");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{	
		printf("\nEnter the data");
	
		newnode=(struct node*)malloc(sizeof(struct node));

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
void display()
{
	printf("\n Linked List Are:\n");
	temp=start;
	while(temp!=NULL)
	{
		printf("%d--->",temp->data);
		temp=temp->next;
	}
	printf("NULL");
}
int insert()
{
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("\nEnter the data");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(start=NULL)
	{
		start=newnode;
	}
	else
	{
		temp=start;
		printf("\nEnter the key after which element:\n");
		scanf("%d",&key);
		while(temp->next!=NULL)
		{
			if(temp->data==key)
			{
				newnode->next=temp->next;
				temp->next=newnode;
				return 0;
			}
		}
		temp=temp->next;
	//	newnode->next=start;
	//	start=newnode;
	}
	
}
