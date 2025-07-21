/*
Nguyen Thanh Sang - PTIT - K25DTCN188
Exercise 24: sao chep tệp tin - page 25
- do không ghi rõ định dạng file, nên mình sẽ dùng đọc ghi file nhị phân.
*/
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;
int main()
{
    std::string src = "PTIT.in";   // Source file name
    std::string dest = "PTIT.out"; // Destination file name

    std::ifstream in(src, std::ios::binary);
    std::ofstream out(dest, std::ios::binary);

    if (!in || !out)
    {
        std::cerr << "Error opening files.\n";
        return 1;
    }

    out << in.rdbuf(); // Copy all content

    in.close();
    out.close();

    return 0;
}
