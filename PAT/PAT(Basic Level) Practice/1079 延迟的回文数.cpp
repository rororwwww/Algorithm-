#include <iostream>
#include <string>
#include <algorithm>

//大数模拟加法
std::string add(std::string &A, std::string &B)
{
    std::string ret;

    //进位标志
    bool flag = false;

    for (size_t i = 0; i < A.size(); i++)
    {
        int n;
        if (flag)
        {
            n = A[i] - '0' + B[i] - '0' + 1;
        }
        else
        {
            n = A[i] - '0' + B[i] - '0';
        }

        if (n >= 10)
        {
            flag = true;
        }
        else
        {
            flag = false;
        }
        ret += '0' + (n % 10);
    }

    if (flag)
    {
        ret += '1';
    }
    

    std::reverse(ret.begin(), ret.end());

    return ret;
}

int main(int argc, char const *argv[])
{
    std::string s;
    std::cin >> s;

    std::string A, B;

    for (size_t i = 0; i < 10; i++)
    {
        A = s;

        std::reverse(s.begin(), s.end());

        B = s;

        if (A == B)
        {
            std::cout << A << " is a palindromic number." << std::endl;
            return 0;
        }

        s = add(A,B);

        std::cout << A << " + " << B << " = " << s << std::endl;
    }

    std::cout << "Not found in 10 iterations." << std::endl;

    return 0;
}
