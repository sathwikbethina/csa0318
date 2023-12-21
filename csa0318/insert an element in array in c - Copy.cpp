#include<stdio.h>
int main()
{
	int a[]={1,2,3,4,5},pos,i,k;
	int n=sizeof(a)/sizeof(a[0]);
	scanf("%d%d",&pos,&k);
	printf("enter pos and element");
	for(i=n;i>=pos;i--)
	a[i]=a[i-1];
	a[pos]=k;
	for(i=0;i<n+1;i++)
	printf(" %d",a[i]);
}
