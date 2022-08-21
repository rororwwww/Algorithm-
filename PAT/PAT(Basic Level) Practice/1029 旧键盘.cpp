#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    string s1;
    string s2;

    cin >> s1 >> s2;

    vector<char> v;

    for (size_t i = 0; i < s1.size(); i++)
    {
        if (s1[i] != s2[i])
        {
            s2.insert(i, "0");

            if ('a' <= s1[i] && 'z' >= s1[i])
            {
                s1[i] -= 32;
            }

            if (find(v.begin(), v.end(), s1[i]) == v.end())
            {
                v.push_back(s1[i]);
                cout << s1[i];
            }

        }
        
    }


    return 0;
}
