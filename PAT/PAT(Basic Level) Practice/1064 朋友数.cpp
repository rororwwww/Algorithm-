#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(int argc, char const *argv[])
{
    int count;
    cin >> count;

    map<int, int> m;

    for (size_t i = 0; i < count; i++)
    {
        int n;
        cin >> n;
        string s = to_string(n);
        
        int key = 0;
        for (size_t i = 0; i < s.size(); i++)
        {
            key += s[i] - '0';
        }

        m[key]++;
        
    }

    cout << m.size() << endl;

    for (auto it = m.begin(); it != m.end(); it++)
    {
        if (it != m.begin())
        {
            cout << " ";
        }
        
        cout << (*it).first;
    }
    

    return 0;
}
