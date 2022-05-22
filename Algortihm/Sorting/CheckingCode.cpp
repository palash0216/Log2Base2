#include <bits/stdc++.h>
using namespace std;
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Driver program to test above functions
int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    // nameofthesort(arr, n);
    cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
}