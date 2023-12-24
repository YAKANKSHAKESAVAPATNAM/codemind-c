#include<stdio.h>
int main()
{
    int i,j;
    int n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            printf("%d ",i);
        }
        printf("
");
    }
}