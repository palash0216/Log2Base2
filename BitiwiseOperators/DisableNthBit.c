
// Here We have to Disable the nth bit of Number .
//Hint: we can Use bitwise and opertor.
// So here we are going to create a bit mask wiht nth bit disabled  then going to XOR with number
// Here we have to create mask in such a way that it should be the complement of (1<<n)

int main()
{
	int num, n;

	scanf("%d%d", &num,&n);

	//Write your code here
	int mask=~(1<<(n-1));
	printf("%d",num&mask);

	
	return 0;
}