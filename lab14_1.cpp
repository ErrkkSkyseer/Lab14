#include <iostream>
using namespace std;

template <typename T>
void show(T arr[], int N)
{
	for (int i = 0; i < N; i++)
		cout << arr[i] << " ";
	cout << endl;
}

template <typename T>
void doInsert(T arr[], int elem)
{
	T temp = arr[elem];
	int stopIndex = 0;
	for (int i = elem; i >= 1; i--)
	{
		if (temp > arr[i - 1])
			arr[i] = arr[i - 1];
		else
		{
			stopIndex = i;
			break;
		}
		}
	arr[stopIndex] = temp;
}

template <typename T>
void insertionSort(T d[], int N)
{
	for (int i = 1; i < N; i++)
	{
		doInsert(d, i);
		cout << "Pass " << i << ":";
		show(d, N);
	}
}

int main()
{
	int a[10] = {12, 25, 30, 44, 2, 0, 4, 7, 55, 25};
	cout << "Input Array:";
	for (int i = 0; i < 10; i++)
		cout << a[i] << " ";
	cout << "\n\n";

	insertionSort(a, 10);

	cout << "\nSorted Array:";
	for (int i = 0; i < 10; i++)
		cout << a[i] << " ";
}
