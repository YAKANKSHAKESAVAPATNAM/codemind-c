#include<stdio.h>
int main()
{
	int a=0,b=1,c,n,i;
	scanf("%d",&n);//10
	printf("%d %d ",a,b);
	for(i=1;i<=n-2;i++)//i=1 1<8
	{
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
	}
}