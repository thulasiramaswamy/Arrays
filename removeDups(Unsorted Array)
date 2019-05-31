// Time Complexity : O(N)
#include <iostream>
#include <unordered_map>
using namespace std;

void removeDups(int arr[], int size)
{
 unordered_map<int, bool> hash_map;
 for (int i = 0; i < size; ++i)
 {
  if (hash_map.find(arr[i]) == hash_map.end())
   cout << arr[i] << " ";
  hash_map[arr[i]] = true;
 }
}
int main(int argc, char const* argv[]) 
{ 
 int arr[] = { 1, 2, 5, 1, 7, 2, 4, 2 };
 int n = sizeof(arr) / sizeof(arr[0]);
 removeDups(arr, n);
 return 0;
}
