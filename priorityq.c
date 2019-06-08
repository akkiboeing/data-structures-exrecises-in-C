#include<stdio.h>
#include<stdlib.h>
void insert();
void del();
void display();
struct node
{
	int priority;
	int info;
	struct node *next;
}*start=NULL,*q,*temp,*new;
typedef struct node N;
int main()
{
	int ch;
	do
	{
		printf("\n1.Insertion\n2.Deletion\n3.Display\n4.Exit");
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:insert();
			       break;
			case 2:del();
			       break;
			case 3:display();
			       break;
			case 4:printf("\n");
			       return 0;
			default: printf("\nInvalid Choice\n");                     
		}
	}while(ch<4);
}
void insert()
{
	int item,itprio;
	new=(N*)malloc(sizeof(N));
	printf("\nEnter the element to be inserted: ");
	scanf("%d",&item);
	printf("\nEnter it's priority:");
	scanf("%d",&itprio);
	new->info=item;
	new->priority=itprio;
	new->next=NULL;
	if(start==NULL)
	{
		start=new;
	}
	else if(start!=NULL&&itprio<=start->priority)
	{
		new->next=start;
		start=new;
	}
	else
	{
		q=start;
		while(q->next!=NULL&&q->next->priority<=itprio)
		{
			q=q->next;}
			new->next=q->next;
			q->next=new;
	}
}
void del()
{
	if(start==NULL)
		printf("\nQueue Underflow\n");
	else
	{
		new=start;
		printf("\nDELETED ITEM IS %d\n",new->info);
		start=start->next;
	}    
}
void display()
{
	temp=start;
	if(start==NULL)
		printf("\nQueue underflow\n");
	else
	{
		printf("\nQueue is \n");
		if(temp!=NULL)
			for(temp=start;temp!=NULL;temp=temp->next)
			{
				printf("\n%d priority=%d\n",temp->info,temp->priority);
			}
	}
}