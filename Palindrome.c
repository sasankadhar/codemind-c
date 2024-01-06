#include<stdio.h>
int main()
{
    int n,c,i,num=0;
    scanf("%d",&n);
    c=n;
    while(n>0)
    {
        i=n%10;
        num=(num*10)+i;
        n=n/10;
    }
    if(c==num)
    {
        printf("True");
    }
    else 
    {
        printf("False");
    }
}