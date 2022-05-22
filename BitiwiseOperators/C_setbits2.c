// Count the number of set bits using Brian Kernighans Algorithm
int countSetBits(int n)
{
    int count = 0;

    while(n)
    {
        n = n & n-1; // This a logic for clearing the rightmost set bit;
        count++;
    }

    return count;
}
