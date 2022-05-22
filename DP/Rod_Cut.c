/*You will be a given a rod of length of n. And an array of prices for all lengths 1 to  n. You have to cut the rod in such a way that we get maximum profit out of selling them.

Implement the function int rod_cutting(int n, int price[]) which takes 2 arguments. 
n - length of rod
price[] - list of pricess for rod length 1 to n.

Return the maximum profit that we can get by cutting and selling the rod in any manner. 
Example

input: 
 4
2 5 6 8

output: 
 10

input: 
 8 
1 5 8 9 10 17 17 20

output: 
 22
 */

 int rod_cutting(int n, int price[])
{
        int max_profit[n+1], i, j;
    for(i=0; i<=n; i++)
        max_profit[i] = 0;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            if(price[j-1] + max_profit[i-j] > max_profit[i])
                max_profit[i] = price[j-1] + max_profit[i-j];
        }
    }

    return max_profit[n];
}
