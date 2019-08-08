#include<stdio.h>
#include<conio.h>
struct student
{
	int id;
	int age,marks;
};
void main()
{
	struct student st[10];
	int i;
	for(i=0;i<10;i++)
	{
		printf("enter id,age,marks od student %d \n",i+1);
		scanf("%d %d %d",&st[i].id,&st[i].age,&st[i].marks);
		if(st[i].age>20 && st[i].marks>=0 && st[i].marks<=100)
		{
			printf("data is valid");
			if(st[i].marks>=65)
			printf("\n student %d is eligible\n",i);
			else
			printf("\n student %d is not eligible\n",i);
		}
		else
		printf("data is invalid\n");
	}
	getch();
}
