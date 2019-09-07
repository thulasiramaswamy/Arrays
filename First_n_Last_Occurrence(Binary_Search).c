Time Complexity : O(logn)
#include<stdio.h>

int BinarySearch(int arr[], int size, int x)
{
 int low = 0;
 int high = size - 1;
 int mid, result = -1;
 while(low <= high)
 {
  mid = (low + high) / 2;
  if(x == arr[mid])
  {
  result = mid;
  low = mid + 1; // last occurrence, towards right side(higher indices)
  //high = mid - 1; // first occurrence, towards left side(lower indices)
  }
  else if(x < arr[mid]) high = mid - 1;
  else low = mid + 1;
}
return result;
}
int main()
{
int arr[] = { 2, 4, 10, 10, 10, 18, 20, 20};
int key = 10;
int n = BinarySearch(arr, sizeof(arr)/sizeof(arr[0]), key);
if( n == -1 ) printf("\n%d is not appeared in the list", key);
else printf("\n%d found at %d index as last occurrence",key, n);
//else printf("\n%d found at %d index as first occurrence ",key, n);
return 0;
}
