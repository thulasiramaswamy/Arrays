// C++ Program to find the number of triplets for a given sum in a given array
#include <iostream>
using namespace std;

int main()
{
 int a[] = { -2, 0, 1, 3 };
 int i, j, k, sum, cnt = 0;
 cout << "Enter Sum: ";
 cin >> sum;
 cout << endl;
 for (i = 0; i<4; i++)
 {
  for (j = i + 1; j<4; j++)
  {
   for (k = j + 1; j<4; j++)
	{
		if (sum > (a[i] + a[j] + a[k]))
		{
		cnt++;
		cout << "Triplets: " << a[i] << " " << a[j] << " " << a[k];
		}
	}
  }
 }
 cout << " Count : " << cnt;
 return 0;
}
