#include <iostream>
using namespace std;

const int N = 5;

void inputMatrix(double[][N]);

void findLocalMax(const double[][N], bool[][N]);

void showMatrix(const bool[][N]);

int main()
{
	double A[N][N];
	bool B[N][N];
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A, B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

// Do not modify source code above this line
void inputMatrix(double mtx[][N])
{
	for (int m = 0; m < N; m++)
	{
		cout << "Row " << m + 1 << ": ";
		for (int n = 0; n < N; n++)
		{
			cin >> mtx[m][n];
		}
	}
}

void findLocalMax(const double mtx[][N], bool ans[][N])
{
	for (int m = 0; m < N; m++)
	{
		for (int n = 0; n < N; n++)
		{
			if (m == 0 || m == N - 1 || n == 0 || n == N - 1)
			{
				ans[m][n] = false;
				continue;
			}

			if (mtx[m][n] >= mtx[m + 1][n] && mtx[m][n] >= mtx[m][n + 1] && mtx[m][n] >= mtx[m - 1][n] && mtx[m][n] >= mtx[m][n - 1])
				ans[m][n] = true;
			else
				ans[m][n] = false;
		}
	}
}

void showMatrix(const bool mtx[][N])
{
	for (int m = 0; m < N; m++)
	{
		for (int n = 0; n < N; n++)
		{
			cout << mtx[m][n] << " ";
		}
		cout << "\n";
	}
}