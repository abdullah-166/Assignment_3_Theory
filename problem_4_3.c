#include<stdio.h>
void receive(int B[],int m)
{
    int k,s=0;
    for(k=0;k<m;k++)
    {
        s+=B[k];
    }
    printf("Summataion is: %d",s);
}
int main()
{
    int n;
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    receive(A,n);
}