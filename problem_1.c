#include<stdio.h>
int main()
{
    int n,s,k,i,j;
    scanf("%d",&n);
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
            printf("%d",j);
         }
         s--;
         k+=2;
         printf("\n");
    }
    s=1;
    k=(2*n)-3;
    for(i=1;i<=(2*n)-3;i++)
    {
         for(j=1;j<=s;j++)
        {
            printf(" ");
        }
        for(j=1;j<=k;j++)
         {
            printf("%d",j);
         }
         s++;
         k-=2;
        printf("\n");
    }
    return 0;
}