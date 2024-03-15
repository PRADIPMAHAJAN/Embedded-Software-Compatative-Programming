
#ifndef ARRAY_H
#define ARRAY_H

#include<stdbool.h>

#define ARR_SIZE 10

/// Functions declarations

/// @brief Function to shift the array to the right
/// @param arr array for the performing operation
/// @param arrSize size of the array
/// @param shiftIdx number which want to shift
void ShiftArray(int arr[], int arrSize, int shiftIdx);

/// ---------------- Shorting Algorithms -----------------

/// @brief short the array using -> Time Complexity = O(N^2) 
/// @param arr 
void SortArraySelSort(int arr[], int arrSize);

/// @brief  -> Time Complexity = O(N^2) 
/// @param arr 
/// @param arrSize 
void BubbleSortArray(int arr[], int arrSize);

/// @brief Divide and Conquore, Divide array in 2 equal part and then merge the 2 sorted array
/* There are 2 main functions 1. merge, mergeSort
  Time complexity - O(NlogN)
 Space Complexity - O(N) */
/// @param arr 
/// @param arrSize 
void MergeSortArray(int arr[], int left, int right);
void Merge(int arr[], int l, int mid, int r);

/// @brief Quick sort is also used divide and conquor algorithm but it does not use extra array for sort
/* Quick sort is slightly better than merge sort
step for quick sort
1. pick a pivot and place it in its correct place in the sorted array
2. Shift smaller element on the left of the pivot and larger on the right of the pivot
Time Complexity -> O(N*log N), worst case = O(n^2)
Space Complexity -> O(1)+O(N) */
/// @param arr 
/// @param arrSize 
void QuickSortArray(int arr[], int low, int high);
int Partition(int arr[], int low, int high);

/// ---------------- Searching Algorithm ------------------

/// @brief 
/// @param arr 
/// @param arrSize 
/// @param key 
/// @param hold 
/// @return 
bool SearchLinear(int arr[], int arrSize, int key, int *hold);

/// @brief 
/// @param arr 
/// @param arrSize 
/// @param key 
/// @return 
bool SearchBinary(int arr[], int arrSize, int key, int *hold);

#endif