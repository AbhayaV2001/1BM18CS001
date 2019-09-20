#include<stdio.h>
#define SIZE 10
void insert(int item,int *r,int q[])
{
  	if(*r==SIZE-1)
  	{
  		printf("Queue overflow\n");
  		return;
  	}
  	*r=*r+1;
  	q[*r]=item;
	return;
}
int delete(int q[],int *f,int *r)
{
	int item;
  	if(*f>*r)
  	{
   		printf("Queue underflow\n");
   		return -9990;
  	}
  	item=q[*f];
  	*f=*f+1;
   	return item;
}
void display(int q[],int f,int r)
{
	int i;
  	if(f>r)
  	{
  		printf("The Queue is empty\n");
   		return;
  	}
   	printf("The contents of Queue are\n");
   	for(i=f;i<=r;i++)
    		printf("%d\n",q[i]);
    	return;
}
void main()
{
	int r=-1,f=0,queue[10];
	int e,c,ele;
	int ch;
	do
	{
		printf("1.insert\n");
		printf("2.delete\n");
		printf("3.display\n");
		printf("\n Enter your choice\n");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
				{
					printf("Enter the element to be inserted\n");
					scanf("%d",&ele);
					insert(ele,&r,queue);
					break;
				}
			case 2:
				{
					e=delete(queue,&f,&r);
					printf("The deleted element is %d\n",e);
					break;
				}
			case 3:
				{
					display(queue,f,r);
					break;
				}
			default:
				{
					printf("Invalid option,try again");
					break;
				}
		}
		printf("Do you want to continue queueing(1/0)? \n");
		scanf("%d",&ch);
	}while(ch==1);
}
