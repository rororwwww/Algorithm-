#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main(int argc, char const *argv[])
{
    int m, n, s;

    cin >> m >> n >> s;

    vector<string> v;
    map<string, bool> owner;

    for (size_t i = 0; i < m; i++)
    {
        string s;
        cin >> s;

        v.push_back(s);
        owner[s] = false;
    }

    if (s > m)
    {
        cout << "Keep going..." << endl;
        return 0;
    }

    int flag = n;

    for (size_t i = s - 1; i < m; i += flag)
    {
        if (!owner[v[i]])
        {
            cout << v[i] << endl;
            owner[v[i]] = true;
            flag = n;
        } 
        else 
        {
            flag = 1;
        }
        
    }

    return 0;
}
