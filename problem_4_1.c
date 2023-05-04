#include<stdio.h>
#include<string.h>
int size(char s[])
{
    int c=0,i;
    for(i=0;i<strlen(s);i++)
    {
        c++;
    }
    return c;
}
int main()
{
    char name[10]="ABDULLAH";
    int p = size(name);
    printf("%d",p);
    return 0;
}