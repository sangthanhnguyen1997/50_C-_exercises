/*
Nguyen Thanh Sang - PTIT - K25DTCN188
Exercise 47: loai bo 100 - page 51;

*/
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int test;
    cin >> test;
    vector<int> answer;
    cin.ignore();
    while (test--)
    {
        string s;
        string a = "100";
        getline(cin, s);
        int cnt = 0;
        while (s.find(a) != string::npos)
        {
            int pos = s.find(a);
            s.erase(pos, 3);
            cnt += 3;
        }
        answer.push_back(cnt);
    }
    for (int x : answer)
        cout << x << endl;
    return 0;
}