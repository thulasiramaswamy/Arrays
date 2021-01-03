// C++ Program to get maximum element and next to it from a given array
#include<iostream>
using namespace std;

int main()
{
 int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
 int max;
 int nextmax;
 max = arr[0];
 nextmax = arr[0];
 for (int i = 0; i < 10;i++)
 {
 	if (max < arr[i])
		max = arr[i];
 }
 cout << endl << "Maximum Element in the Array: "<< max << endl;
 for (int i = 0; i < 10; i++)
 {
  if (arr[i] > nextmax && arr[i] < max )
	nextmax = arr[i];
 }
 cout << endl << "Maximum Element in the Array: " << nextmax << endl;
 return 0;
}
