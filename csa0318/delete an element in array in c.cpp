#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5},pos,i;
	printf("enter pos");
	scanf("%d",&pos);
	for(i=pos;i<=5;i++)
	a[i]=a[i+1];
	for(i=0;i<4;i++)
	printf(" %d",a[i]);
}
