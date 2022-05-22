/*You will be given weights and values of n items. You have to put these items in a knapsack in such a way that you get maximum value. You have to pick the item completely or leave it. You should not break or take a fraction of an item (0 - 1 property)

Implement the function int knapSack(int c, int n, int wt[], int val[]) which takes 4 arguments. 
c  - capacity of knapsack
n  -  number of items
wt[]  - weights of n items
val[]  - values of n items  

You have to return the maximum value that we can get by filling up knapsack following 0 - 1 property. 
Example

input: 
 7
4
1, 3, 4, 5
1, 4, 5, 7

output: 
 7

input: 
 30
4
5 12 20 10
50 60 140 60

output: 
 200
 code function */
int knapSack(int c, int n, int wt[], int val[])
{
    int i,w;
    int dp[n+1][c+1];
    for(i=0;i<=n;i++)
    {
        for(w=0;w<=c;w++)
        {
            if(i==0||w==0)
                dp[i][w]=0;
            else if(wt[i-1]<=w)
                dp[i][w]=max(val[i-1]+dp[i-1][w-wt[i-1]],dp[i-1][w]);
            else
                dp[i][w]= dp[i-1][w];
                
        }
    }
     return dp[n][c];

}
int max(int a, int b) 
{  
    return (a > b) ? a : b;  
}
