// Time Complexity - O(logn)
#include <stdio.h> 
int binarySearch(int arr[], int low, int high, int key) 
{
 while (low <= high)
 {
  int mid = low + (high - low) / 2;
  if (arr[mid] == key) return mid;
  if (arr[mid] < key) low = mid + 1;
  else	high = mid - 1;
 }
 return -1;
}
int main(void)
{
 int arr[] = { 2, 3, 4, 10, 40 };
 int size = sizeof(arr) / sizeof(arr[0]);
 int key = 10;
 int result = binarySearch(arr, 0, size - 1, key);
 (result == -1) ? printf("Element is not present in array") : printf("Element is present at index %d", result);
 return 0;
}
