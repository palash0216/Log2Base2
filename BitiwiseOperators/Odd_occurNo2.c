/*
You will be given an array of numbers where every number appears exactly twice except two numbers that appear only once. Your task is to find the two numbers that appear only once.

Note: After finding those two numbers, you need to store the numbers in *num1, *num2 respectively. Assume that the memory is allocated for *num1 & *num2 (No need to create dynamic memory using malloc or calloc).
Example

input: 
 arr[] = {5,5,6,3,6,4}
size = 6

output: 
 3 4

input: 
 arr[] = {3,5,7,3}
size = 4

output: 
 5 7
*/
void twoSingleNumbers(int arr[], int size, int *num1, int *num2)
{
    int i;
    int xorResult = 0;

    for(i = 0; i < size; i++)
         xorResult ^= arr[i];

    int firstSetBit = 1;
    while((xorResult & firstSetBit) == 0)
    {
        firstSetBit <<= 1;
    }

    int n1 = 0, n2 = 0;
    for(i = 0; i < size; i++)
    {
        if(arr[i] & firstSetBit)
            n1 ^= arr[i];
        else
            n2 ^= arr[i];
    }

   *num1 = n1;
   *num2 = n2;
}