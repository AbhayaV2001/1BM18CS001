#include<stdio.h>
#include<ctype.h>
void push(int c,int *t,int s[20]);
int pop(int *t,int s[20]);
int main()
{
        int stack[20];
	int top = -1;
	char exp[20];
        char *e;
        int n1,n2,n3,num;
        printf("Enter the expression :: ");
        scanf("%s",exp);
        e = exp;
        while(*e != '\0')
        {
                if(isdigit(*e))
                {
                        num = *e - 48;
                        push(num,&top,stack);
                }
                else
                {
                        n1 = pop(&top,stack);
                        n2 = pop(&top,stack);
                        switch(*e)
                        {
                                case '+':
                                {
                                        n3 = n1 + n2;
                    			break;
                                }
                                case '-':
                                {
                                        n3 = n2 - n1;
                                        break;
                                }
                                case '*':
                                {
                                        n3 = n1 * n2;
                                        break;
                                }
                                case '/':
                                {
                                        n3 = n2 / n1;
                                        break;
                                }
                        }
                        push(n3,&top,stack);
                }
                e++;
        }
        printf("\nThe result of expression %s  =  %d\n\n",exp,pop(&top,stack));
        return 0;
 
}
void push(int c,int *t,int s[20])
{
	if(*t==19)
	{
		printf("Stack Overflow");
		return;
	}
	s[++(*t)] = c;
}
int pop(int *t,int s[20])
{
	if((*t) == -1)
		return -1;
	else
		return s[(*t)--];
}
