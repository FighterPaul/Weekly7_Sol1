#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int factorial(int n)						//Problem 109, Solution 1, ID Student 65010902
{	
	if (n == 0) return 1;
	else return n * factorial(n - 1);
}
int Combinations(int n, int r)				// C (n,r)
{
	return (     factorial(n) / ( factorial(n - r) * factorial(r) )  );
}
int main()
{
	unsigned int result;
	unsigned int num;
	scanf("%d", &num);
	result = Combinations(num,2);
	printf("%d", result);
	return 0;
}