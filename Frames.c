#include<stdio.h>
int main()
{
    int l,b,a;
    scanf("%d%d%d",&l,&b,&a);
    int perimeter=2*(l+b);
    int x=a*perimeter;
    printf("%d",x);
}