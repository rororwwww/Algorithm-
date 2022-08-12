#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int m, n;

    cin >> m >> n;

    int c = 0;

    int count = 0;

    vector<int> v;

    int i = 2;

    while (count < n)
    {
        bool is = true;

        for (size_t k = 2; k <= sqrt(i); k++)
        {
            if (i % k == 0)
            {
                is = false;
                break;
            }
        }

        if (is)
        {
            count++;
            v.push_back(i);
        }

        i++;
    }

    for (size_t i = m - 1; i < n; i++)
    {
        if (c != 0)
        {
            cout << " ";
        }

        cout << v[i];
        c++;

        if (c == 10)
        {
            cout << "\n";
            c = 0;
        }
    }

    return 0;
}
