#include <iostream>
#include <map>

using namespace std;

int main(int argc, char const *argv[])
{
    map<char, int> m;
    // P A T e s t
    string pat = "PATest";


    string s;
    getline(cin ,s);

    int sum = 0;

    for (size_t i = 0; i < s.size(); i++)
    {
        if (pat.find(s[i]) != string::npos)
        {
            m[s[i]]++;
            sum++;
        }
        
    }

    string ret;
    while (sum != 0)
    {
        for (size_t i = 0; i < pat.size(); i++)
        {
            if (m[pat[i]] != 0)
            {
                ret += pat[i];
                m[pat[i]]--;
                sum--;
            }
            
        }
    }
    
    cout << ret << endl;

    return 0;
}
 