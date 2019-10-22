
#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};

typedef struct node* NODE;
//create our list
NODE getNode() {
	NODE n = malloc(sizeof(struct node));
	n->data = 0;
	n->next = NULL;
	return n;
}

//to insert node
NODE insert(NODE head, int val) { 
	NODE temp = head, n = getNode();
	n->data = val;
	if (head == NULL) 
	    return n;
	while (temp->next != NULL) {
		temp = temp->next;
	}
	temp->next = n;
	return head;
}
void display(NODE head) {
	if (head == NULL) {
		printf("list is empty\n");
		return;
	}
	printf("The contents of the list are:\n");
	NODE temp = head;
	while (temp != NULL) {
		printf("%d\n", temp->data);
		temp = temp->next;
	}
	printf("\n");
}
void sort(NODE head)
{
	NODE p=head,q=NULL;
	int temp;
	if(head==NULL)
	{
		printf("List is empty\n");
		return;
	}
	while(p->next!=NULL)
	{
		q=p->next;
		while(q!=NULL)
		{
			if(p->data>q->data)
			{
				temp=p->data;
				p->data=q->data;
				q->data=temp;
			}
			q=q->next;
		}
		p=p->next;
	}
}
NODE reverse(NODE head)
{
	NODE curr=head,prev=NULL;
	NODE newn=NULL;
	if(head==NULL)
	{
		printf("\n the list is empty!!\n");
		return head;
	}
	if(head->next==NULL)
		return head;
	while(curr!=NULL)
	{
		newn=curr->next;
		curr->next=prev;
		prev=curr;
		curr=newn;
	}
	head=prev;
	return head;
}
NODE concat(NODE head1,NODE head2)
{
	NODE curr=head1;
	if(head1==NULL)
	{
		printf("List1 is empty\n");
		return head1;
	}
	if(head2==NULL)
	{
		printf("List2 is empty\n");
		return head2;
	}
	while(curr->next!=NULL)
		curr=curr->next;
	curr->next=head2;
	return head1;
}
int main()
{
	NODE head1=NULL,head2=NULL;
	int ele,choice,val;
	while(1)
	{
		printf("1.insert ll1\n2.insert ll2\n3.sort ll1\n4.sort ll2\n5.reverse ll1\n6.reverse ll2\n7.concatenate\n8.display\n9.exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:	printf("Enter val");		
				scanf("%d",&val);
				head1=insert(head1,val);
				break;
			case 2:	printf("Enter val");
				scanf("%d",&val);
				head2=insert(head2,val);
				break;
			case 3:	sort(head1);
				printf("ll1 sorted\n");
				break;
			case 4:	sort(head2);
				printf("ll2 sorted\n");
				break;
			case 5:	head1=reverse(head1);
				printf("ll1 reversed\n");
				break;
			case 6:	head2=reverse(head2);
				printf("ll2 reversed\n");
				break;
			case 7:	head1=concat(head1,head2);
				break;
			case 8:	printf("1.to display ll1,2.to display ll2\n");
				int c1;
				scanf("%d",&c1);
				if(c1==1)
				{printf("ll1 elements:\n");		
				display(head1);
				}
				else
				{
				printf("ll2 elements:\n");		
				display(head2);
				}
				break;
			case 9:	exit(0);
				break;
			default:printf("Invalid choice try again!\n");
		}
	}
}
