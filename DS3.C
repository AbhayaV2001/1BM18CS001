#include<stdio.h>
#include<conio.h>
struct student
{
	int id;
	int age,marks;
};
int validate(struct student s);
int qualify(struct student s);
void main()
{
	struct student st[10];
	int i,n;
	printf("enter the number of students");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter id,age,marks od student %d \n",i+1);
		scanf("%d %d %d",&st[i].id,&st[i].age,&st[i].marks);
		if(qualify(st[i]))
		printf("\n student %d is eligible\n",i+1);
		else
		printf("\n student %d is not eligible\n",i+1);
	}
	getch();
}
int validate(struct student s)
{
	if(s.age>20 && s.marks>=0 && s.marks<=100)
	return 1;
	else
	return 0;
}
int qualify(struct student s)
{
	if(validate(s))
	{
		if(s.marks>=65)
		return 1;
		else
		return 0;
	}
	else
	printf("invalid");
	return 0;
}