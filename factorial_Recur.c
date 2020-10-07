#include<stdio.h>

int fact(int n);

void main()
{	
	int n,z;	
	printf("Enter the factorial of a number : ");
	scanf("%d",&n);
	z=fact(n);
	printf("%d",z);
}

int fact(int n)
{
	if((n==0 || n==1))
	return 1;
	else
	return(n*fact(n-1));
}
