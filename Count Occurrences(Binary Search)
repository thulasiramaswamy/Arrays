// Time Complexity : O(logn)
#include <iostream>

int BinarySearch(int arr[], int n, int x, bool searchFirst)
{
 int low = 0, high = n - 1, result = -1;
 while(low <= high)
 {
 int mid = (low + high)/2;
 if(arr[mid] == x)
  {
   result = mid;
   if(searchFirst) high = mid - 1;
   else low = mid + 1;
  }
  else if(x < arr[mid]) high = mid - 1;
  else low = mid + 1;
 }
 return result;
}
int main()
{
 int arr[] = { 1, 1, 3, 3, 5, 5, 5, 5, 5, 9, 9, 11 };
 int x=9;
 int firstIndex = BinarySearch(arr, sizeof(arr)/sizeof(arr[0]), x, true);
 if(firstIndex == -1) printf("Count of %d is %d", x, 0);
 else
 {
  int lastIndex = BinarySearch(arr, sizeof(arr)/sizeof(arr[0]), x, false);
  printf("Count of %d is %d", x, lastIndex - firstIndex + 1);
 }
 return 0;
}
