#include<stdio.h>
int factorial(int n);
int main()
{
	int n;
	printf("enter a number");
	scanf("%d",&n);
	printf("factorial of %d=%d",n,factorial(n));
	return 0;
}
int factorial(int n)
{
	if(n>=1)
	return n*factorial(n-1);
	else
	return 1;
}
	
	

