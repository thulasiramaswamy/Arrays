// Time Complexity : O(nLogn)

#include<iostream> 
using namespace std; 

void find3largest(int arr[], int size)
{ 
 sort(arr, arr + size); // Quick sort takes logn time
 int check = 0, count = 1; 

 for(int i = 1; i <= size; i++)
  {
  if( count < 4)
   {
    if(check != arr[size - i])
     {
      cout << arr[size - i] << " ";
      check = arr[size - i];
      count++;
     }
   }
  else
   break;
 }
}
int main()
{
 int arr[] = {12, 45, 1, -1, 45, 54, 23, 5, 0, -10};
 int n = sizeof(arr)/sizeof(arr[0]);
 find3largest(arr, n);
 return 0;
}
