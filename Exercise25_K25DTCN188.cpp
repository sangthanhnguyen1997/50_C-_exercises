/*
Nguyen Thanh Sang - PTIT - K25DTCN188
Exercise 25: quay ma tran - page 26

*/
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

// Hàm xoay từng lớp (layer) 1 bước theo chiều kim đồng hồ
void rotateLayer(vector<vector<int>> &a, int layer, int n, int m)
{
    vector<int> temp;

    int top = layer, bottom = n - 1 - layer;
    int left = layer, right = m - 1 - layer;

    if (top >= bottom || left >= right)
        return;

    // --- B1: Lấy phần tử lớp layer ---
    // Top row
    for (int j = left; j <= right; ++j)
        temp.push_back(a[top][j]);
    // Right column
    for (int i = top + 1; i <= bottom; ++i)
        temp.push_back(a[i][right]);
    // Bottom row
    for (int j = right - 1; j >= left; --j)
        temp.push_back(a[bottom][j]);
    // Left column
    for (int i = bottom - 1; i > top; --i)
        temp.push_back(a[i][left]);

    // --- B2: Xoay phải 1 bước ---
    int last = temp.back();
    temp.pop_back();
    temp.insert(temp.begin(), last);

    // --- B3: Gán lại ---
    int idx = 0;
    for (int j = left; j <= right; ++j)
        a[top][j] = temp[idx++];
    for (int i = top + 1; i <= bottom; ++i)
        a[i][right] = temp[idx++];
    for (int j = right - 1; j >= left; --j)
        a[bottom][j] = temp[idx++];
    for (int i = bottom - 1; i > top; --i)
        a[i][left] = temp[idx++];
}

// Hàm tổng hợp xoay tất cả các lớp
void rotateMatrixLayers(vector<vector<int>> &a)
{
    int n = a.size();
    int m = a[0].size();
    int numLayers = min(n, m) / 2;

    for (int layer = 0; layer < numLayers; ++layer)
        rotateLayer(a, layer, n, m);
}

struct matran
{
    int hang; // i
    int cot;  // j
    vector<vector<int>> matrix;
    matran(int h, int c) : hang(h), cot(c), matrix(h, vector<int>(c)) {};
    void print()
    {
        for (int i = 0; i < this->hang; i++)
        {
            for (int j = 0; j < this->cot; j++)
            {
                cout << this->matrix[i][j] << ' ';
            }
        }
    }
};
int main()
{
    int test;
    cin >> test;
    vector<matran> answer;
    answer.reserve(test);
    while (test--)
    {
        int n, m;
        cin >> n >> m;
        matran x{n, m};
        for (int i = 0; i < x.hang; i++)
        {
            for (int j = 0; j < x.cot; j++)
            {
                cin >> x.matrix[i][j];
            }
        }
        answer.push_back(x);
    }
    for (matran x : answer)
    {
        rotateMatrixLayers(x.matrix);
        x.print();
        cout << endl;
    }

    return 0;
}
