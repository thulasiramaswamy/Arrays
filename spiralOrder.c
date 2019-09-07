// Time Complexity : O(mn)

// Input : { {1, 2, 3, 4, 5, 6},
//           {7, 8, 9, 10, 11, 12},
//           {13, 14, 15, 16, 17, 18}
//         };
// O/p : 1 2 3 4 5 6 12 18 17 16 15 14 13 7 8 9 10 11

#include <iostream>
using namespace std;

#define R 3
#define C 6

void spiralPrint(int end_row_index, int end_col_index, int arr[R][C])
{
 int i, start_row_index = 0, start_col_index = 0;
 while (start_row_index < end_row_index &&  start_col_index < end_col_index) 
 { 
   for (i = start_col_index; i < end_col_index; ++i) // Print the first row from the remaining rows
     cout << arr[start_row_index][i] << " ";
 
   start_row_index++;
   for (i = start_row_index; i < end_row_index; ++i) // Print the last column from the remaining columns
    cout << arr[i][end_col_index-1] << " "; 
   end_col_index--;

  if(start_row_index < end_row_index) // Print the last row from the remaining rows
  {
   for (i = end_col_index-1; i >= start_col_index; --i)
    {
    cout << arr[end_row_index-1][i]<<" "; 
    }
    end_row_index--;
  }
  if (start_col_index < end_col_index) // Print the first column from the remaining columns
  {
    for (i = end_row_index-1; i >= start_row_index; --i)
      cout << arr[i][start_col_index] << " ";
    start_col_index++;
  }
 } // while loop ends
}
int main()
{
int arr[R][C] = { {1, 2, 3, 4, 5, 6},
                  {7, 8, 9, 10, 11, 12},
                  {13, 14, 15, 16, 17, 18}
                };
spiralPrint(R, C, arr); 
return 0; 
}
