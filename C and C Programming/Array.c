#include "Array.h"
#include <stdio.h>

/// Selection sorting algorithm
void SortArraySelSort(int arr[], int arrSize)
{
    for (int i = 0; i < arrSize; i++) /// iteration untill size of array
    {
        for (int j = i + 1; j < arrSize; j++) /// start from index + 1
        {
            if (arr[i] > arr[j]) /// if prev is > next
            {
                int temp = arr[i]; /// swapping
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

/// Bubble Sorting Algorithm 
void BubbleSortArray(int arr[], int arrSize)
{
    for(int i=arrSize-1; i>=0; i--)
    {
        for(int j=0; j<=i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void Merge(int arr[], int l, int mid, int r)
{
    int n1 = mid - l + 1;   /// Size of first array
    int n2 = r - mid;       /// Size of second array

    int a[n1];              /// temp arr 1
    int b[n2];              /// temp arr 2

    /// store from left to mid data in n1 arr
    for(int i=0; i<n1; i++)
    {
        a[i] = arr[l+i];
    }

    /// store from mid to right end data in n2 array
    for(int i=0; i<n2; i++)
    {
        b[i] = arr[mid+1+i];
    }

    int i =0;
    int j =0;
    int k = l;

    /// compare array in both arr
    while(i<n1 && j<n2)
    {
        if(a[i] <= b[j])   /// Changed < to <= for stability
        {
            arr[k] = a[i];
            k++, i++;
        }
        else
        {
            arr[k] = b[j];
            k++, j++;
        }
    }

    /// If our i pointer not goes to end
    while(i<n1)
    {
        arr[k] = a[i];
        k++, i++;
    }

    /// If our j pointer not goes to end
    while(j<n2)
    {
        arr[k] = b[j];
        k++, j++;
    }
}

/// MergeSort array algorithm
void MergeSortArray(int arr[], int left, int right)
{
    if(left < right)
    {
        int mid = left + (right - left) / 2;      /// Find mid 
        MergeSortArray(arr, left, mid);    /// Pass from start to mid
        MergeSortArray(arr, mid+1, right); /// Pass from mid to end

        Merge(arr, left, mid, right); // Merge
    }
}

/// Quick Sorting Algorithm
int Partition(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j) {
        while (arr[i] <= pivot && i <= high - 1) {
            i++;
        }

        while (arr[j] > pivot && j >= low + 1) {
            j--;
        }

        if (i < j) {
            // Swap arr[i] and arr[j] without using swap function
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    // Swap arr[low] and arr[j] without using swap function
    int temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;
}

void QuickSortArray(int arr[], int low, int high) {
    if (low < high) {
        int Pindex = Partition(arr, low, high);
        QuickSortArray(arr, low, Pindex - 1);
        QuickSortArray(arr, Pindex + 1, high);
    }
}

----------------------- Searching Algorithms -------------------------
/// Search key in using linear search
bool SearchLinear(int arr[], int arrSize, int key, int *hold)
{
    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] == key)
        {
            *hold = i;
            return true;
        }
    }
    return false;
}

/// Search key using Binary search 
bool SearchBinary(int arr[], int arrSize, int key, int *hold)
{
    SortArraySelSort(arr, arrSize); /// sorting array required for binary search
    int start = 0;
    int end = arrSize;
    while (start <= end)
    {
        int mid =(start + end) / 2;
        if (arr[mid] == key)
        {
            *hold = mid;
            return true;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return false;
}

// Shift array as per the shift value
void ShiftArray(int arr[], int arrSize, int shiftIdx)
{
    for (int i = arrSize - 1; i >= shiftIdx; i--) /// From last index to total number of item stored
    {
        arr[i] = arr[i - shiftIdx]; /// last index - shiftInd = ex 7 store to last position
    }
    for (int i = 0; i < shiftIdx; i++)
    {
        arr[i] = 0; /// put zero in start index
    }
}

int main()
{
    int a[ARR_SIZE] = {1, 21, 13, 40, 5, 6, 7, 0, 0, 10};
    int shiftInx = 4;
    int arrSize = sizeof(a) / sizeof(a[0]);

    QuickSortArray(a, 0, arrSize);

    for(int i=0; i<ARR_SIZE; i++)
    {
        printf("%d ", a[i]);
    }
    int p;
}