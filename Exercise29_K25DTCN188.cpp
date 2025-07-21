/*
Nguyen Thanh Sang - PTIT - K25DTCN188
Exercise 29: tinh tong cac so trong xau - page 30;

*/
#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <cctype>
#include <algorithm>
#include <sstream>
using namespace std;
int main()
{
    int test;
    cin >> test;
    cin.ignore();
    vector<int> answer;
    answer.reserve(test);
    while (test--)
    {
        string input;
        int sum = 0;
        getline(cin, input);
        for (int i = 0; i < input.length(); i++)
        {
            if (input[i] < '0' || input[i] > '9')
                input[i] = ' ';
        }
        stringstream ss(input); // còn cách khác là duyệt đếm tách từng số, nhưng hơi lâu.
        string word;
        while (ss >> word)
        {
            int numb = stoi(word);
            sum += numb;
        }
        answer.push_back(sum);
    }
    for (int x : answer)
    {
        cout << x << endl;
    }
    return 0;
}