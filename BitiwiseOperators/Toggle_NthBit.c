//You will be given two positive integers 'num' and 'n' . Your task is to toggle nth bit of 'num' using bitwise operators.
#include<stdio.h>

int main()
{
	int num, n;

	scanf("%d%d", &num, &n);

	//Write your code here
	int mask=1<<(n-1);
	printf("%d",num^mask);


	return 0;
}