#include<stdio.h>
int main()
{
    int X1,Y1,X2,Y2,Z1,Z2;
    scanf("%d%d%d%d",&X1,&Y1,&X2,&Y2);
    Z1=X1+Y1;
    Z2=X2+Y2;
    if(Z1>Z2)
    {
        printf("%d",Z2);
    }
    else
    {
        printf("%d",Z1);
    }
}