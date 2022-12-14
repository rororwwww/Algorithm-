//模拟乘除法
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    string s;
    cin >> s;
    string ret;

    int i;
    cin >> i;

    int yu = 0;
    
    for (size_t n = 0; n < s.size(); n++)
    {
        int num = yu * 10 + (s[n] - '0');

        char c;

        yu = num % i;

        c = num / i + '0';

        ret += c;
    }

    if (ret[0] == '0' && ret.size() > 1)
    {
        ret.erase(ret.begin());
    }
    

    cout << ret << " " << yu << endl;

    return 0;
}
