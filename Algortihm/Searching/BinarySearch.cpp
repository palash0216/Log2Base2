int BinarySearch(int arr[], int start, int end, int key)//Only work on Sorted arrays
{
    int mid;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == key)
            return 1;
        if (arr[mid] < key)
            start = mid + 1;
        else
            mid = mid - 1;
    }
    return 0;
}
// best case O(1) : when Key is in the middle.