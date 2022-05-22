//Count Number of Set bits
int countSetBits(unsigned int n)
{
    int count=0;
    while(n>0)
    {
        int last_bit=n&1;
        if(last_bit==1)
            count++;
        n=n>>1;
    }
    return count;
}
