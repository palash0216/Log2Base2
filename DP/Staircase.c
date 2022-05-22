/*Consider there are 'n' stairs. A person can either climb one stair or two stairs at a time. Your task it find out the number of ways in which the person can reach the nth stair. 

Implement the function int findSteps(int n) which takes up 1 argument. 
n - number of stairs. 

Return the number of ways in which a person can reach the nth stair
Example

input: 
 2

output: 
 1

input: 
 7

output: 
 21
*/

// Code function

int findSteps(int n)
{
    int steps[n+1], i;
    
    steps[1] = 1;
    steps[2] = 2;

    for(i = 3; i <= n; i++)
        steps[i] = steps[i-1]+steps[i-2];

    return steps[n];
}

