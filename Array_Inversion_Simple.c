// Time Complexity - 0(n^2)
// Two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j
// The sequence 2, 4, 1, 3, 5 has three inversions (2, 1), (4, 1), (4, 3).

#include <iostream> 
using namespace std; 

int getInvCount(int arr[], int n) 
{ 
  int inv_count = 0; 
  for(int i = 0; i < n - 1; i++) 
     for(int j = i + 1; j < n; j++) 
    	if (arr[i] > arr[j]) 
	      inv_count++; 
  return inv_count; 
}
int main(int argv, char** args) 
{ 
 int arr[] = { 1, 20, 6, 4, 5 }; 
 int n = sizeof(arr) / sizeof(arr[0]); 
 cout << " Number of inversions are " << getInvCount(arr, n); 
 return 0;
}
