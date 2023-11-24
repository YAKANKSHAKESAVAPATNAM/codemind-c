#include<stdio.h>
int main()
{
    int r,rev=0,N,t;
    scanf("%d",&N);
    t=N;
    while(N!=0)
    {
        r=N%10;
        rev=rev*10+r;
        N=N/10;
    }
    if(rev==t)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}