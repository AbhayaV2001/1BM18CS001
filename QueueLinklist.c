#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *ptr;
}*front,*rear,*temp,*front1;
int front_element();
void enq(int data);
void deq();
void empty();
void display();
void queuesize();
int count=0;
void main()
{
	int no,ch,e;
	printf("\n1.Enqueue");
	printf("\n2.Dequeue");
	printf("\n3.Front Element");
	printf("\n4.Empty");
	printf("\n5.Exit");
	printf("\n6.Display");
	printf("\n7.Queue size");
	front=NULL;
	rear=NULL;
	while(1)
	{
		printf("\nEnter choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter data:");
				scanf("%d",&no);
				enq(no);
				break;
			case 2:
				deq();
				break;
			case 3:
				e=front_element();
				if(e!=0)
					printf("Front ele: %d",e);
				break;
			case 4:
				empty();
				break;
			case 5:
				exit(0);
				break;
			case 6:
				display();
				break;
			case 7:
				queuesize();
				break;
			default:
				printf("Invalid choice");
				break;
		}
	}
}
void queuesize()
{
	printf("\n Queue size: %d",count);
}
void enq(int data)
{
	if(rear==NULL)
	{
		rear=(struct node*)malloc(1*sizeof(struct node));
		rear->ptr=NULL;
		rear->info=data;
		front=rear;
	}
	else
	{
		temp=(struct node*)malloc(1*sizeof(struct node));
		rear->ptr=temp;
		temp->info=data;
		temp->ptr=NULL;
		rear=temp;
	}
	count++;
}
void display()
{
	front1=front;
	if((front1==NULL)&&(rear==NULL))
	{
		printf("Queue is empty");
		return;
	}
	while(front1!=rear)
	{
		printf("%d \n",front1->info);
		front1=front1->ptr;
	}
	if(front1==rear)
	{
		printf("%d",front1->info);
	}
}
void deq()
{
	front1=front;
	if(front1==NULL)
	{
		printf("Queue is empty");
		return;
	}
	else if(front1->ptr!=NULL)
	{
		front1=front1->ptr;
		printf("\n Dequed value:%d",front->info);
		free(front);
		front=front1;
	}
	else 
	{
		printf("\n Dequed value=%d",front->info);
		free(front);
		front=NULL;
		rear=NULL;
	}
	count--;
}
int front_element()
{
	if((front!=NULL)&&(rear!=NULL))
		return(front->info);
	else 
		return 0;
}
void empty()
{
	if((front==NULL)&&(rear==NULL))
		printf("\n Queue empty");
	else 
		printf("Queue not empty");
}


