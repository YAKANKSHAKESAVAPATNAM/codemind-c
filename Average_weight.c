#include<stdio.h>
int main()
{
    int Average,Boy1,Boy2,Boy3;
    scanf("%d%d%d%d",&Average,&Boy1,&Boy2,&Boy3);
    Boy3=3*Average-Boy1-Boy2;
    printf("%d",Boy3);
}