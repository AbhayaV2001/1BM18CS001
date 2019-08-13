#include<stdio.h>
#include<conio.h>
	int stack[100],top=-1;
	void push(int ele);
	int pop();
	void display();
	int main()
	{
		int e;
		clrscr();
		push(1);
		push(2);
		push(3);
		display();
		e=pop();
		printf("Popped element is %d",e);
		display();
		getch();
		return 0;
	}
	void push(int ele)
	{
		if(top==99)
		{
			printf("stack overflow");
			return;
		}
		stack[++top]=ele;
	}
	int pop()
	{
		if(top==-1)
		{
			printf("stack underflow");
			return -9999;
		}
		return stack[top--];
	}
	void display()
	{
		int i;
		if(top==-1)
		{
			printf("stack is empty \n");
			return;
		}
		for(i=top;i>=0;i--)
		printf("\n %d \n",stack[i]);
	}

