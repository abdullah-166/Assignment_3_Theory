#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,k,s,j;
    s=n-1;
    k=1;
    for(i=1;i<=n;i++)
    {
         for(j=1;j<=s;j++)
         {
            printf(" ");
         }
        for(j=1;j<=k;j++)
        {
            printf("%d",i);
        }
        s--;
        k++;
        printf("\n");
    }
    return 0;
}