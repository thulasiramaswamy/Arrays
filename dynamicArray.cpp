// C++ Program to demonstrate a dynamic array
#include<iostream>
using namespace std;

class DynamicArray
{
 public:
  int i;
  int *arr = new int[10];
  void Add()
  {		
	for (i = 0;i<10;i++)
	cin >> arr[i];
  }
  void Display()
  {
	cout << "\nElements in the array: ";
	for (int j = 0; j < i; j++)
	 cout << endl << arr[j];
  }
};

int main()
{
 DynamicArray d;	
 int n;
 do{
	cout << "\n0. Exit\n1. Add\n2. Display\nEnter Choice";
	cin >> n;
	switch (n)
	{
	case 0:
		exit(0);
		break;
	case 1: 			
		d.Add();
		break;
	case 2: 
		d.Display();
		break;
	default: 
		cout << "\nInvalid Choice !!!";
	}
   } while (1);
  return 0;
}
