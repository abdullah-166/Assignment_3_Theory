#include<stdio.h>
int count_before_zero(int B[], int m)
{
    int c=0;
    int i,j;
    for(i=0;i<m;i++)
    {
       if(B[i]>0)
       {
          c++;
       }
       else
       {
           break;
       }
    }
    return c;
}
int main()
{
    int n;
    scanf("%d",&n);
    int A[n];
    int i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
   int b = count_before_zero(A,n);
   printf("%d",b);
}