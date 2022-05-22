int BinarySearch(int arr[], int start, int end, int key)
{
    int mid;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == key)
            return 1;
        if (arr[mid] < key)
            return BinarySearch(arr,mid + 1,end,key);
        else
            return BinarySearch(arr,start,mid-1,key);

    }
    return 0;
}
