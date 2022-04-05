#include<stdio.h>

void main()
{
	void isprime(int);
	
	int n,p;
	
	printf("\nEnter a number : ");
	scanf("%d",&n);
	isprime(n);
}

void isprime(int num)
{
	int i;
	for(i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
			printf("\n\n\tNot a Prime Number");
			return;
		}
	}
	printf("\n\n\tPrime Number");
}
