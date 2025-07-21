/*
Nguyen Thanh Sang - PTIT - K25DTCN188
Exercise 45: Tim kiem giang vien- page 49;
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <sstream>
#include <cctype>
using namespace std;
class GV
{
private:
    string ht, bm, ma;
    static int stt;

public:
    GV() : ht(""), bm("") {}
    friend istream &operator>>(istream &in, GV &x)
    {
        getline(in, x.ht);
        getline(in, x.bm);
        return in;
    }
    friend ostream &operator<<(ostream &out, const GV &x)
    {
        out << x.ma << ' ' << x.ht << ' ' << x.bm << endl;
        return out;
    }
    void formatGV()
    {
        ostringstream oss;
        stt++;
        oss << "GV" << setfill('0') << setw(2) << stt;
        this->ma = oss.str();
        istringstream iss(this->bm);
        string word, temp;

        while (iss >> word)
        {
            temp += toupper(word[0]);
        }
        this->bm = temp;
    }
    string getHT() const { return ht; }
};
int GV::stt = 0;
int main()
{
    int cnt;
    cin >> cnt;
    cin.ignore();
    vector<GV> v;
    while (cnt--)
    {
        GV x;
        cin >> x;
        x.formatGV();
        v.push_back(x);
    }
    cin >> cnt;
    cin.ignore();
    while (cnt--)
    {
        string s;
        getline(cin, s);
        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << s << ":\n";
        for (char &x : s)
            x = tolower(x);
        for (GV a : v)
        {

            string b = a.getHT();
            for (char &x : b)
                x = tolower(x);
            if (b.find(s) != string::npos)
                cout << a;
        }
    }

    return 0;
}