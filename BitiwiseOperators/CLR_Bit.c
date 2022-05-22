//clearRightmostSetbit
//The most important logic used here is :
// The number N & N-1
int clearRightmostSetBit(int n)
{
    return n&(n-1);
}

// 12 - 00001_100
// 11 - 00001_011       // we can have a clear observation here is that rightmost bits asre flipped to each other.
// &  - 00001000