#include<stdio.h>
#include<string.h>
int is_palindrome(char n[])
{
    char p;
    int i,flag=0;
   for(i=0;i < strlen(n) ;i++)
   {
        if(n[i] != n[(strlen(n))-i-1])
        {
            flag = 1;
            break;
        }
    }
    if(flag)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    char name[20];
    scanf("%s",name);
    int Q = is_palindrome(name);
    if(Q == 1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
}