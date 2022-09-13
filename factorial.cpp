#include<stdio.h>
long factorial(int n)
{
	if (n == 0)
	return 1;
	else
	return(n * factorial(n-1));
}
int main ( )
{
	int nbr;
	long fact;
	printf("enter a number to calculate its factorial:");
	scanf("%d",&nbr);
	if (nbr < 0)
	printf("the factorial of negative integers is not defined.\n");
	else
	{
	fact = factorial(nbr);
	printf("%d! = %1d\n", nbr,fact);
	}
	return 0;
}
