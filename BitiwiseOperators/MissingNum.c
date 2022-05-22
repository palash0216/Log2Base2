/*
You will be given a non-duplicate array of n-1 integers from range 1 to n. One of the integers is missing from the list. Your task is to find that one missing number.
Example

input: 
 arr[] = {1, 4, 5, 3, 2, 7}

output: 
 6

input: 
 arr[] = {1, 2, 4, 5, 6}

output: 
 3
*/
int findMissingNumber(int arr[], int n)
{
    int result = 0, i;

    for(i = 0; i < n; i++)
        result = result ^ arr[i];

    for(i = 1; i <= n+1; i++)
        result = result ^ i;

    return result;
}