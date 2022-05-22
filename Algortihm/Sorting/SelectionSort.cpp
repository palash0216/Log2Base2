// Find Maximum/minimum and place in the correct position.
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
void SelectionSort(int arr[], int size)
{
    int i, j,min_index;
    for (i = 0; i < size - 1; i++)
    {
        min_index=i;
        for (j = i + 1; j < size; j++)
        {
            if (arr[j] > arr[min_index]) 
                min_index=j;
            //Decreasing Order 
            //For Increasing Order (arr[i]<arr[j])
        
                swap(&arr[min_index],&arr[i]);
            
        }
    }
}
//It is inplace sorting algorithm