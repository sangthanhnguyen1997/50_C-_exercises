/*
Nguyen Thanh Sang - PTIT - K25DTCN188
Exercise 12: bien doi nhi phan - page 13


*/
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int test;
	cin >> test;
	vector<vector<vector<int>>> answer;
	while (test--)
	{
		int m, n;
		cin >> n >> m;
		vector<vector<int>> v(n, vector<int>(m, 0));
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cin >> v[i][j];
			}
		}

		vector<int> row(n, 1);
		vector<int> collum(m, 1);
		int check = 0;
		for (int i = 0; i < n; i++)
		{
			check = 0;
			for (int j = 0; j < m; j++)
			{
				check += v[i][j];
			}
			if (check == 0)
				row[i] = 0;
		}
		for (int i = 0; i < m; i++)
		{
			check = 0;
			for (int j = 0; j < n; j++)
			{
				check += v[j][i];
				v[j][i] = 1;
			}
			if (check == 0)
				collum[i] = 0;
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (row[i] == 0 && collum[j] == 0)
					v[i][j] = 0;
			}
		}
		answer.push_back(v);
	}
	for (auto x : answer)
	{
		for (auto i : x)
		{
			for (auto j : i)
			{
				cout << j << " ";
			}
			cout << endl;
		}
	}
	return 0;
}
