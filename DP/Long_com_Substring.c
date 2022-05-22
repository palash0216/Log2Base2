int lcst(int m, char *x, int n, char *y) 
{
    int dp[m + 1][n + 1];
    int result = 0; 
    int i, j; 

    for (i = 0; i <= m; i++) 
    { 
        for (j = 0; j <= n; j++) 
        { 
            if (i == 0 || j == 0) 
                dp[i][j] = 0; 
   
            else if (x[i-1] == y[j-1]) 
            {
                dp[i][j] = dp[i-1][j-1] + 1;
 
                if(dp[i][j] > result)
                    result = dp[i][j];
            }
            else
                dp[i][j] = 0; 
        } 
    } 

    return result; 
}