#include<stdio.h>
int stack[100],choice,i,n,top,x;
void push();
void pop();
void display();
int main()
{
	top=-1;
	printf("Enter the size of stack:\n");
	scanf("%d",&n);
	printf("1.push\n2.pop\n3.Display\n4.exit\n");
	do
	{
		printf("Enter the choice:\n");
		scanf("%d",&choice);
     switch(choice)
     {
     	case 1:
     	{
     		push();
     		break;
		 }
		 case 2:
		 {
		 	pop();
		 	break;
		 }
		 case 3:
		 {
		 	display();
		 	break;
		 }
		 case 4:
		 	{
		 		printf("Exit point\n");
		 		break;
			 }
			 default:
			 {
			 	printf("enter the valid choice1.push\t2.pop\t3.display\t4.Exit");
			 }
	 }
	}
	while(choice!=4);
	return 0;
}
void push()
{
	if(top>=n-1)
	{
		printf("stack is overflowed\n");
	}
	else
	printf("Enter the value to be pushed:\n");
	scanf("%d",&x);
	top++;
	stack[top]=x;
}
void pop()
{
	if(top<=-1)
	{
		printf("stack is underflowed\n");
	}
	else
	{
		printf("The poped element is:%d\n ",stack[top]);
		top--;
	}
}
void display()
{
	if(top>=0)
	{
		printf("The elements in the stack:\n");
		for(i=top;i>=0;i--)
		printf("%d\n",stack[i]);
	}
	else
	{
		printf("The stack is empty");
	}
}
