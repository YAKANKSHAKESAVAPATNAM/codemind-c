//check the given no.fibnoci or not
#include<stdio.h>
int main()
{
	int a=0,b=1,c,n,i,flag;
	scanf("%d",&n);//14
	c=a+b;
	while(c<=n)
	{
		if(c==n)
		{
			flag=1;
			break;
		}
		a=b;
		b=c;
		c=a+b;
	}
	if(flag==1)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
}