// Maximum subarray problem
// Task of finding a contiguous subarray with the largest sum, within a one dimensional array A[1...n]
// Input: { -2, 1, -3, 4, -1, 2, 1, -5, 4 }, Output: 6
// Explanation: { 4, -1, 2, 1 } has the largest sum = 6.
// Time Complexity: O(n)
// Algorithmic Paradigm: Dynamic Programming
// What is Sub Array?
// An Array within an array containing contiguous elements
// Downside : Algorithm works for mix of -ve and +ve integers
#include <iostream>
using namespace std;
int maxSubArraySum(int a[], int size) 
{
 int max_so_far = 0;
 int max_ending_here = 0;
 for (int i = 0; i < size; i++)
 {
   max_ending_here = max_ending_here + a[i];

   if (max_ending_here < 0) max_ending_here = 0;

   else if (max_so_far < max_ending_here) max_so_far = max_ending_here;
 }
 return max_so_far;
}
int main() 
{ 
 int a[] =  {-2, -3, 4, -1, -2, 1, 5, -3}; 
 int n = sizeof(a)/sizeof(a[0]); 
 int max_sum = maxSubArraySum(a, n); 
 printf("Maximum contiguous sum is : %d", max_sum);
 return 0; 
}
