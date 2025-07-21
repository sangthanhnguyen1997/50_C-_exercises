/*
Nguyen Thanh Sang - PTIT - K25DTCN188
Exercise 23: tính tổng 2 đối tượng phân số - page 24

*/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int ucln(int a, int b)
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
    phanso(int a, int b)
    {
        this->tuso = a;
        this->mauso = b;
    }
    friend phanso operator+(const phanso &x, const phanso &y)
    {
        phanso c;
        c.tuso = x.tuso * y.mauso + x.mauso * y.tuso;
        c.mauso = x.mauso * y.mauso;
        return c;
    }
    phanso rutgon() const
    {
        int d = ucln(this->tuso, this->mauso);
        return phanso(this->tuso / d, this->mauso / d);
    }
    void in() const
    {
        cout << this->tuso << '/' << this->mauso;
    }
};
int main()
{
    int x, y, z, t;
    cin >> x >> y >> z >> t;
    phanso A{x, y};
    phanso B{z, t};
    phanso a = A.rutgon();
    phanso b = B.rutgon();
    phanso c = A + B;
    phanso C = c.rutgon();
    C.in();
    return 0;
}
