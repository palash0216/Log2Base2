//You will be given two numbers 'num1' and 'num2'. Your task is to swap 'num1' and 'num2' using bitwise operators.
//Hint using bitwise#include<stdio.h>

int main()
{
	int a, b;

	scanf("%d%d", &a, &b);

	//Write your code here
	a=(a^b);
    b=(a^b);
    a=(a^b);


	printf("%d %d", a, b);
	
	return 0;
}