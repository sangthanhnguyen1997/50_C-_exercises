/*
Nguyen Thanh Sang - PTIT - K25DTCN188
Exercise 27: cua so truot - page 28

*/
#include <iostream>
#include <vector>
#include <iterator>
using namespace std;
int main()
{
    int n, m;
    cin >> n;
    vector<vector<int>> N(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> N[i][j];
    }
    cin >> m;
    vector<vector<int>> M(m, vector<int>(m));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> M[i][j];
    }
    for (int i = 0; i < n; i += m)
    {
        for (int j = 0; j < n; j += m) // 2 vong for ngoai de xac dinh cua so
        {
            for (int i1 = 0; i1 < m; i1++) // 2 vong for trong de tinh toan trong cua so
            {
                for (int j1 = 0; j1 < m; j1++)
                    N[i + i1][j + j1] *= M[i1][j1];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << N[i][j] << ' ';
        cout << endl;
    }

    return 0;
}