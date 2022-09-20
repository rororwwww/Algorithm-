#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int count;
    cin >> count;

    map<string, string> m;
    for (size_t i = 0; i < count; i++)
    {
        string s1, s2;
        cin >> s1 >> s2;
        m[s1] = s2;
        m[s2] = s1;
    }

    cin >> count;
    vector<string> v;
    for (size_t i = 0; i < count; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }

    sort(v.begin(), v.end());

    vector<string> ret;
    for (size_t i = 0; i < count; i++)
    {

        if (m.find(v[i]) == m.end())
        {

            ret.push_back(v[i]);
            continue;
        }

        if (binary_search(v.begin(), v.end(), m[v[i]]))
        {
            ret.push_back(v[i]);
            continue;
        }
    }

    cout << ret.size() << endl;
    for (size_t i = 0; i < ret.size(); i++)
    {
        if (i != 0)
        {
            cout << " ";
        }

        cout << ret[i];
    }

    return 0;
}
