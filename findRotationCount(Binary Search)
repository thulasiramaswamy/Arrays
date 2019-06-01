// Time Complexity - O(logn)

#include <stdio.h>

int findRotationCount(int arr[], int size)
{
 int low = 0, high = size - 1;
 while(low <= high)
 {
  if(arr[low] <= arr[high]) return low; // case 1
  int mid = (low + high)/2 ;
  int next = (mid + 1) % size;
  int prev = (mid + size - 1) % size;

  if(arr[mid] <= arr[next] && arr[mid] <= arr[prev]) return mid; // case 2

  else if(arr[mid] <= arr[high]) high = mid - 1; // case 3

  else if(arr[mid] >= arr[low]) low = mid + 1; // case 4
 }
 return -1;
}
int main()
{
 int arr[] = { 15, 22, 23, 28, 31, 5, 6, 8, 10, 12 };
 int count = findRotationCount(arr, sizeof(arr)/sizeof(arr[0]));
 printf("Array rotated %d times", count);
}
