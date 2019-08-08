#include<stdio.h>
#include<conio.h>
struct student
{
	char stdid[20];
	int age,marks;
}s1;
void main()
{
	char c;
	clrscr();
	printf("enter the student id\n");
	scanf("%s",s1.stdid);
	printf("enter the student age\n");
	scanf("%d",&s1.age);
	printf("enter the marks\n");
	scanf("%d",&s1.marks);
	do
	{
		if(s1.marks>=0 && s1.marks<=100 && s1.age>20)
		{
			printf("data is valid\n");
			if(s1.marks>=65)
			printf("student is eligible \n");
		}
		else
		{
			printf("data is invalid");
		}
		printf("do you want to continue(y/n)");
		scanf("%c", &c);
	}while(c=='y' || c=='Y');
getch();
}

