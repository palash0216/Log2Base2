//You will be given a positive integer as input. Your task is to check whether the given number is the power of 2 or not.

int isPowerOfTwo(int n)
{
    if((n&(n-1))==0)
        return 1;
    else
        return 0;
}

