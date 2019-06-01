// Time complexity : O(logn)

#include <stdio.h>

int circularArraySearch(int arr[], int size, int key)
{
 int low = 0, high = size - 1;
 while(low <= high)
 {
  int mid = (low + high)/2;
  if(key == arr[mid]) return mid;
  if(arr[mid] <= arr[high])
  {
    if(key > arr[mid] && key <= arr[high]) low = mid + 1;
    else high = mid - 1;
  }
  else
  {
   if(arr[low] <= key && key < arr[mid]) high = mid - 1;
   else low = mid + 1;
  }
 }
 return -1;
}
int main()
{
 int arr[] = {12, 14, 18, 21, 3, 6, 8, 9};
 int key = 18;
 int index = circularArraySearch(arr, sizeof(arr)/sizeof(arr[0]), key);
 if(index == -1) printf("%d not found", key);
 else printf("%d found at index %d", key, index);
 return 0;
}
