/*
Nguyen Thanh Sang - PTIT - K25DTCN188
Exercise 1: tinh tong tu 1 den N
có thể dùng đệ quy hoặc dùng công thức.
*/

#include <iostream>
using namespace std;

void printOut(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << endl;
	}
}
int sum(int n)
{
	return (n * (n + 1)) / 2;
}

int main()
{
	int testIndex;
	int input[testIndex];
	int output[testIndex];
	cin >> testIndex;
	for (int i = 0; i < testIndex; i++)
	{
		cin >> input[i];
	}
	for (int i = 0; i < testIndex; i++)
	{
		output[i] = sum(input[i]);
	}

	printOut(output, testIndex);

	return 0;
}
