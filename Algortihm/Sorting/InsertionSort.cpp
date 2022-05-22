void InsertionSort(int *arr, int N)
{
    int temp, i, j;
    for (i = 1; i < N; i++)
    {
        temp = arr[i];
        j = i - 1;
        while ((temp < arr[j]) && (j >= 0))
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
}