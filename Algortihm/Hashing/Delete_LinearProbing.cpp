#define size 5
int arr[size];
int del(int value)
{
    int key = value % size;
    int index = key;
    while (arr[index] != value)
    {
        index = (index + 1) % size;
        if (index == key)
            return 0;
    }
    arr[index] = -1;
    return 1;
}
