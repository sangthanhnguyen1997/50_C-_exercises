/*
Nguyen Thanh Sang - PTIT - K25DTCN188
Exercise 30: tach chu so - page 31;

*/
#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <cctype>
#include <algorithm>
using namespace std;
int main()
{
    int test;
    cin >> test;
    cin.ignore();
    vector<string> answer;
    answer.reserve(test);
    while (test--)
    {
        string s;
        getline(cin, s);
        int sum = 0;
        // xoa cac so trong xau, tinh tong cac so co trong xau
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= '0' && s[i] <= '9')
            {
                sum = sum + (s[i] - '0');
                s.erase(s.begin() + i);
                i--;
            }
        }
        string s2 = to_string(sum);
        sort(s.begin(), s.end()); // sap xep lai cac chu theo thu tu tu dien
        s = s + s2;               // cong chuoi
        answer.push_back(s);
    }
    for (string x : answer)
        cout << x << endl;
    return 0;
}