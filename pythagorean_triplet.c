// Time Complexity : O(n^2)
// 1. Do square of every element in input array. This step takes O(n) time.
// 2. Sort the squared array in increasing order. This step takes O(nLogn) time.
// 3. To find a triplet (a, b, c) such that a2 = b2 + c2, do following.
//   i.   Fix 'a' as last element of sorted array.
//   ii.  Now search for pair (b, c) in subarray between first element and 'a'. 
//      A pair (b, c) with given sum can be found in O(n) time using meet in middle algorithm discussed in method 1 of this post.
//   iii. If no pair found for current 'a', then move 'a' one position back and repeat step 3.2.

// Input  : {3, 1, 4, 6, 5}
// Output : Yes

#include <iostream> 
#include <algorithm> 
using namespace std; 

bool isTriplet(int arr[], int n) 
{ 
  for(int i = 0; i < n; i++) arr[i] = arr[i] * arr[i];

  sort(arr, arr + n);

  for (int i = n-1; i >= 2; i--)
  {
   int l = 0;
   int r = i-1;
   while (l < r)
   { 
      if (arr[l] + arr[r] == arr[i]) return true; 
      (arr[l] + arr[r] < arr[i]) ? l++: r--; 
   }
  }
 return false;
}
int main() 
{
 int arr[] = {3, 1, 4, 6, 5}; 
 int arr_size = sizeof(arr)/sizeof(arr[0]); 
 isTriplet(arr, arr_size)? cout << "Yes": cout << "No"; 
 return 0; 
}
