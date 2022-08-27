#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    map<char, int> m;
    getline(cin,s);

    for (size_t i = 0; i < s.size(); i++)
    {
        if (('a' <= s[i] && s[i] <= 'z') || ('A' <= s[i] && s[i] <= 'Z'))
        {
            s[i] = tolower(s[i]);
            m[s[i]]++;
        }
    }

    int max = 0;
    char ret;

    for (auto it = m.begin(); it != m.end(); it++)
    {
        if ((it->second) > max)
        {
            max = it->second;
            ret = it->first;
        }
        
    }

    cout << ret << " " <<  max << endl;
    
    return 0;
}
