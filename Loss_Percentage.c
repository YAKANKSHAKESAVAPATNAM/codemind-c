#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    float loss((x-y)/10.0);
    float losspercentage((loss*1000)/x);
    printf("%.2f",losspercentage);
}