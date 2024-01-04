#include<stdio.h>
int main()
{
    float n,f,i;
    float b,sum=0;
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
        b=1/i;
        sum=sum+b;
    }
    printf("%.2f",sum);
}