#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    string s1, s2, ret;

    cin >> s1 >> s2;

    char c[] = {'0','1','2','3','4','5','6','7','8','9','J','Q','K'};
    
    s2.size() > s1.size() ? s1.insert(0, s2.size() - s1.size(),'0') : s2.insert(0, s1.size() - s2.size(),'0');

    int k = 0;

    for (int i = s2.size() - 1; i >= 0; i--, k++)
    {
        int i1,i2;

        i1 = s1[i] - '0';
        i2 = s2[i] - '0';

        if ((k + 1) % 2 != 0)
        {
            int n = i1 + i2;

            n = n % 13; 

            ret += c[n];

        } else {
            int n = i2 - i1;
            
            if (n < 0)
            {
                n += 10;
            }

            ret += to_string(n);

        }
        
    } 

    reverse(ret.begin(), ret.end());

    cout << ret << endl;

    return 0;
}
