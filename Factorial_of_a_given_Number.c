#include<stdio.h>
int main()
{
    int i,n,mult=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        mult*=i;
    }
    printf("%d",mult);
}