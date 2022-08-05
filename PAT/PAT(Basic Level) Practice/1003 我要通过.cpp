#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(int argc, char const *argv[])
{
    int count;

    cin >> count;

    for (size_t i = 0; i < count; i++)
    {
        string str;

        cin >> str;

        int p;
        int t;

        map<char, int> m;

        for (size_t i = 0; i < str.length(); i++)
        {
            
            m[str[i]]++;

            if (str[i] == 'P')
            {
                p = i;
            }

            if (str[i] == 'T')
            {
               t = i; 
            }

        }

        if (m.size() == 3 && m['P']==m['T']==1 && (t - p > 1) && p * (t - p -1) == (str.length() - t -1))
            cout << "YES" << endl;
        else
            cout << "NO" << endl; 
    }

    return 0;
}
