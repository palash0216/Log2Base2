//Check the adajacent elements and compare
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
void BubbleSort(int arr[], int size)
{
    int i, j;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size-1-i; j++)
        {
            if (arr[j] < arr[j+1]) //Decreasing Order 
            //For Increasing Order (arr[i]>arr[j])
            {
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}
