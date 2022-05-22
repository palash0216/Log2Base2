// Here We have to enable the nth bit of Number .
//Hint: wwe can Use bitwise OR opertor.
// So here we are going to create a bit mask wiht nth bit enabled  then going to XOR with number
#include<stdio.h>

int main()
{
	int num, n;

	scanf("%d%d", &num,&n);

	//Write your code here
	int mask=1<<(n-1);
	printf("%d",num|mask);

	
	return 0;
}