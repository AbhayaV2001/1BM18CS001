import java.util.*;
interface Stack
{
	void push(int item);
	int pop();
	void display();
}
class Dynamic implements Stack
{
	int size,top, st[];
	Dynamic()
	{
		Scanner se=new Scanner(System.in);
		System.out.println("Enter size");
		size=se.nextInt();
		st=new int[size];
		top=-1;
	}
	public void push(int item)
	{
		if(top==size-1)
		{
			size=size*2;
			int temp[]=new int[size];
	
		for(int i=0;i<size/2;i++)
			{
				temp[i]=st[i];
			}
			st=temp;
			st[(++top)]=item;
		}
		else
			st[(++top)]=item;
	}
	
	public int pop()
	{
		if(top==-1)
			{
				System.out.println("Stack underflow");
				return -9999;
			}
		else
		{
			return st[(top--)];
		}
	}
	public void display()
	{
		if(top==-1)
			System.out.println("Stack is empty");
		else
	{
		System.out.println("Elements in stack are");
		for(int i=top;i>=0;i--)
		{
			System.out.println(st[i]);
		}
	}
	}
}
class StackTest
{
	public static void main(String args[])
{
	Scanner se=new Scanner(System.in);
	Stack ref;
	ref=new Dynamic();
	System.out.println("1.Push 2.Pop 3.Display");
	System.out.println("Enter choice");
	int choice =se.nextInt();
	while(choice!=0)
	{
		switch(choice)
	{
		case 1: System.out.println("Enter elements to be inserted");
			int element=se.nextInt();
			ref.push(element);
			break;
		case 2: int e=ref.pop();
			if(e!=-9999)
			System.out.println("The popped element is "  + e);
			break;
		case 3:ref.display();
			break;
		default : System.out.println("Invalid input");
	}
	System.out.println("Enter choice");
	 choice =se.nextInt();
	}
}
}
/*Enter size
1
1.Push 2.Pop 3.Display
Enter choice
1
Enter elements to be inserted
23
Enter choice
3
Elements in stack are
23
Enter choice
1
Enter elements to be inserted
12
Enter choice
1
Enter elements to be inserted
23
Enter choice
3
Elements in stack are
23
12
23
Enter choice
2
The popped element is 23
Enter choice
2
The popped element is 12
Enter choice
2
The popped element is 23
Enter choice
2
Stack underflow
Enter choice
0
/*
