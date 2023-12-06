#include<stdio.h>
int main()
{
    int X,Y;
    scanf("%d%d",&X,&Y);
    float profit=(-(X-Y)/10.0);
    float profitpercentage=(profit*1000)/X;
    printf("%.2f",profitpercentage);
}