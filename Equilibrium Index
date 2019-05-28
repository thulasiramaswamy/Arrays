// Time Complexity: O(n)
// The idea is to get total sum of array first. 
// Then Iterate through the array and keep updating the left sum which is initialized as zero.
// In the loop, we can get right sum by subtracting the elements one by one.
// Input : A[] = {-7, 1, 5, 2, -4, 3, 0}, Output : 3
// 3 is an equilibrium index, because:
// A[0] + A[1] + A[2]  =  A[4] + A[5] + A[6]


#include <iostream>
using namespace std; 

int equilibrium(int arr[], int n) 
{ 
 int sum = 0;
 int leftsum = 0;

 /* Find sum of the whole array */
 for (int i = 0; i < n; ++i) 
 	sum = sum + arr[i]; 

 for (int i = 0; i < n; ++i) 
 { 
   sum = sum - arr[i];
   if (leftsum == sum) return i; 
   leftsum = leftsum + arr[i]; 
  } 
 return -1; 
}
int main() 
{ 
 int arr[] = { -7, 1, 5, 2, -4, 3, 0 }; 
 int arr_size = sizeof(arr) / sizeof(arr[0]); 
 cout << "First equilibrium index is " << equilibrium(arr, arr_size); 
 return 0; 
}
