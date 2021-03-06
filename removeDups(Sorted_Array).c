// Time Complexity : O(n)
// Input : {1, 2, 2, 3, 4, 4, 4, 5, 5}
// Output : {1, 2, 3, 4, 5}
#include<stdio.h> 

int removeDuplicates(int arr[], int size) 
{ 
 if (size == 0 || size == 1) return size;

 int temp[size];
 int i, j = 0;
  for ( i = 0 ; i < size - 1 ; i++)
  {
   if (arr[i] != arr[i+1])
	temp[j++] = arr[i];
  }
  temp[j++] = arr[size-1];
  for ( i = 0 ; i < j ; i++) 
    arr[i] = temp[i];
  return j;
}
int main() 
{ 
 int arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 5};
 int n = sizeof(arr) / sizeof(arr[0]);
 int i;
 n = removeDuplicates(arr, n);
 for ( i = 0 ; i < n ; i++)
 printf(" %d ", arr[i]);
 return 0;
}
