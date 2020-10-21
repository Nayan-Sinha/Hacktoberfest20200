#include<fibbo.c>
#include<stdio.h>
int fibo(n)
{
    if(n<=2)
    {
        return n;
    }
    else
    {
         fibo(n-1)+fibo(n-2);
    }
}
int main()
{
    int n,i;
    printf("enter the range of fibonacci series : ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("%d\t",fibo(i));
    }

    return 0;
}
