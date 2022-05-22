/*You will be given two positive integers 'num' and 'n' . Your task is to check if nth bit of 'num' is set or not using bitwise operators.
Example

input:
 64 5

output:
 OFF

input:
 64 7

output:
 ON*/
 // Here we can us the bitwise and operator 0&1=0 and 1&1=1
 #include<stdio.h>

int main()
{
	int num, n;

	scanf("%d%d", &num, &n);

	//Write your code here
	if(((num & (1<<(n-1)))!=0))
	    printf("ON");
	else if(((num & (1<<(n-1)))==0))
	    printf("OFF");
	

	return 0;
}