#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(int argc, char const *argv[])
{
    string s1;
    string s2;

    cin >> s1 >> s2;

    map<char, int> m1,m2;

    for (size_t i = 0; i < s1.size(); i++)
    {
        m1[s1[i]]++;
    }

    for (size_t i = 0; i < s2.size(); i++)
    {
        m2[s2[i]]++;
    }

    int ret = 0;
    for (auto x : m2)
    {

        if (x.second > m1[x.first])
        {
            ret += m1[x.first] - x.second;
        }
        
    }
    
    
    if (ret == 0)
    {
        cout << "Yes" << " " << s1.size() - s2.size();
    } else {
        cout << "No" << " " << -ret;
    }
    

    return 0;
}
