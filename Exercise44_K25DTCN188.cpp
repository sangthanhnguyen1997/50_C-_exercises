/*
Nguyen Thanh Sang - PTIT - K25DTCN188
Exercise 44: Liêt kê sinh viên theo ngành- page 47;
//bài này giống bài 43, nâng cấp lên.
// làm cấu trúc vector là đơn giản nhất, mẫu nhỏ, không cần tra cứu thường xuyên
//cần nâng cấp với cấu trúc lớn thì dùng map + equal range, cấu trúc tra cứu thường xuyên.

*/

#include <iostream>
#include <map>
#include <algorithm>
#include <iomanip>
#include <sstream>
#include <cctype>
using namespace std;
class sinhvien
{
private:
    string msv, ht, l, email;

public:
    sinhvien() : msv(""), ht(""), l(""), email("") {}
    friend istream &operator>>(istream &in, sinhvien &sv)
    {
        getline(in, sv.msv);
        getline(in, sv.ht);
        getline(in, sv.l);
        getline(in, sv.email);
        return in;
    }
    friend ostream &operator<<(ostream &out, sinhvien &sv)
    {
        out << sv.msv << ' ' << sv.ht << ' ' << sv.l << ' ' << sv.email << endl;
        return out;
    }
    friend bool tieuchisapxep(const sinhvien &a, const sinhvien &b);
    string getMSV_cn()
    {
        string ss = this->msv;
        string s = ss.substr(3, 4);
        return s;
    } // lấy mã sinh viên chuyên ngành.
    string getMSV() { return this->msv; }
};
bool tieuchisapxep(const sinhvien &a, const sinhvien &b)
{
    return a.msv < b.msv;
}
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    multimap<string, sinhvien> mp;
    while (n--)
    {
        sinhvien x;
        cin >> x;
        mp.insert(make_pair(x.getMSV_cn(), x));
    }
    int q;
    cin >> q;
    cin.ignore();
    // ánh xạ đầu vào -> key chuyên ngành
    map<string, string> mpcn;
    mpcn.insert({"Ke toan", "DCKT"});
    mpcn.insert({"Cong nghe thong tin", "DCCN"}); // -E ở đầu
    mpcn.insert({"An toan thong tin", "DCAT"});   // -E ở đầu
    mpcn.insert({"Vien thong", "DCVT"});
    mpcn.insert({"Dien tu", "DCDT"});
    // bat dau tra cuu
    while (q--)
    {
        string tracuu;
        getline(cin, tracuu);
        string key = mpcn[tracuu];
        auto range = mp.equal_range(key);
        for (int i = 0; i < tracuu.length(); i++)
            tracuu[i] = toupper(tracuu[i]);
        cout << "DANH SACH SINH VIEN NGANH " << tracuu << ":\n";

        for (auto it = range.first; it != range.second; it++)
        {
            if (((key == "DCCN") || (key == "DCAT")) && (*it).second.getMSV()[0] == 'E')
                continue;
            else
                cout << it->second;
        }
    }

    return 0;
}