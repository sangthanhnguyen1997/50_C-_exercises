/*
Nguyen Thanh Sang - PTIT - K25DTCN188
Exercise 22: khai bao lop phan so - page 23

*/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
long long ucln(long long a, long long b)
{

    while (b > 0)
    {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}
class phanso
{
private:
    long long tuso;
    long long mauso;

public:
    phanso()
    {
        tuso = 0;
        mauso = 1;
    }
    explicit phanso(long long a, long long b)
    {
        tuso = a;
        mauso = b;
    }
    phanso rutgon()
    {
        long long c = ucln(tuso, mauso);
        return phanso(tuso / c, mauso / c);
    }
    void in()
    {
        cout << tuso << '/' << mauso;
    }
};
int main()
{
    long long x, y;
    cin >> x >> y;
    phanso a{x, y};
    phanso b = a.rutgon();
    b.in();
    return 0;
}
