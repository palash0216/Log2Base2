// First Intitialze the array with -1
void init_result(int *result, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        result[i] = -1;
    }
}
int Fibonacci(int N)
{
    if (result[N] == -1)
    {
        if ((N <= 1))
            result[N] = N;
        else
            result[N] = Fibonacci(N - 1) + Fibonacci(N - 2);
    }
    return result[N];
}