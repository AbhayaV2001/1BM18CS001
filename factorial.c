#include<stdio.h>
#include<stdlib.h>
int factorial(int);
int main()
{
   int num, fact;
   
   printf("\nEnter any integer number:");
   scanf("%d",&num);
   fact =factorial(num);
   printf("\nfactorial of %d is: %d \n",num, fact);
   return 0;
}
int factorial(int n)
{
   	if(n<0)
	{	
		printf("Invalid number. Terminating program\n");
		exit(1);
	}
	if(n==0)
      		return(1);
   	return(n*factorial(n-1));
}
