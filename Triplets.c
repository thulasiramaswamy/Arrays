// Given an array of distinct integers. The task is to count all the triplets such that sum of two elements equals the third element.
// Input : A[] = {1, 2, 3, 4, 5}
// Output : 4
// The valid triplets are:
// (1, 2, 3), (1, 3, 4), (1, 4, 5), (2, 3, 5)

#include<iostream> 
using namespace std; 

int countWays(int arr[], int n) 
{
 int max_val = 0; 
 for(int i = 0; i < n; i++) 
 max_val = max(max_val, arr[i]);
 int freq[max_val + 1] = {0};
 for (int i = 0; i < n; i++)
 freq[arr[i]]++;
 int ans = 0;

 ans = ans + freq[0] * (freq[0] - 1) * (freq[0] - 2) / 6;

 for(int i = 1 ; i <= max_val ; i++)
 ans = ans + freq[0] * freq[i] * (freq[i] - 1) / 2;

 for(int i = 1 ; 2 * i <= max_val ; i++)
 ans = ans + freq[i] * (freq[i] - 1) / 2 * freq[2 * i];

 for (int i = 1 ; i <= max_val ; i++)
 {
  for (int j = i + 1 ; i + j <= max_val ; j++)
  ans = ans + freq[i] * freq[j] * freq[i + j];
 }
return ans;
}
int main()
{
 int arr[] = { 7, 2, 5, 4, 3, 6, 1, 9, 10, 12 };
 int n = sizeof(arr)/sizeof(int);
 cout << (countWays(arr, n));
 return 0;
}
