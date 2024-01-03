 #include<stdio.h>
#define size 50
int queue[size];
int front=-1,rear=-1;
void enque(int num)
{
	if(rear>size-1)
	printf("\nover flow");
	else
	front=0;
	rear++;
	queue[rear]=num;
}  

 deque()
{
	if(front==-1)
	printf("\ndownflow");
	else
	front++;
}
void display()
{
	for(int i=front;i<=rear;i++)
	{
	 printf("%d ",queue[i]);
	}
}
int main()
{
	for(int i = 0; i < 5; i++)
	{
		int test;
		scanf("%d", &test);
		enque(test);
	}
	deque();
	display();
}
