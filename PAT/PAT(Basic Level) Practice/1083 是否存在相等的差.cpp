#include <iostream>
#include <map>
using namespace std;

int main(int argc, char const *argv[])
{
    int count;
    map<int, int> m;

    cin >> count;

    for (size_t i = 1; i <= count; i++)
    {
        int n;
        cin >> n;

        int key = (n > i) ? (n - i) : (i - n);

        m[key]++;
    }

    for (auto it = m.rbegin(); it != m.rend(); it++)
    {
        if ((*it).second > 1)
        {
            cout << (*it).first << " " << (*it).second << endl;
        }
    }

    return 0;
}
