// Time Complexity - O(Logn)
// Given an unsorted array of nonnegative integers, find a continous subarray which adds to a given number

// Input: arr[] = {1, 4, 20, 3, 10, 5}, sum = 33
// Ouptut: Sum found between indexes 2 and 4

// Input: arr[] = {1, 4, 0, 0, 3, 10, 5}, sum = 7
// Ouptut: Sum found between indexes 1 and 4

#include<stdio.h>

void subArraySum(int arr[], int n, int sum)
{
 int curr_sum = arr[0], start = 0, i;
 for (i = 1; i <= n; i++)
 {
    while (curr_sum > sum && start < i-1)
    {
      curr_sum = curr_sum - arr[start]; 
      start++; 
    }
    if (curr_sum == sum) 
    {
       printf ("Sum found between indexes %d and %d", start, i-1);
       return;
    }
    curr_sum = curr_sum + arr[i];
 }
 printf("No subarray found");
}
int main() 
{ 
 int arr[] = {15, 2, 4, 8, 9, 5, 10, 23}; 
 int n = sizeof(arr)/sizeof(arr[0]); 
 int sum = 23; 
 subArraySum(arr, n, sum); 
 return 0; 
}
