#include <iostream>
#include <iomanip>
#include <map>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int count;
    cin >> count;

    map< int, vector<int> > m;

    int i;
    int flag = 0;

    vector<int> v0;
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    vector<int> v4;

    m[0] = v0;
    m[1] = v1;
    m[2] = v2;
    m[3] = v3;
    m[4] = v4;

    for (size_t n = 0; n < count; n++)
    {
        cin >> i;

        if (i % 10 == 0)
        {
            m[0].push_back(i);
        }

        if (i % 5 == 1)
        {
            m[1].push_back(i);
        }

        if (i % 5 == 2)
        {
            m[2].push_back(i);
        }

        if (i % 5 == 3)
        {
            m[3].push_back(i);
        }

        if (i % 5 == 4)
        {
            m[4].push_back(i);
        }
    }

    for (auto it = m.begin(); it != m.end(); it++)
    {

        if (it->first == 0)
        {

            if (it->second.empty())
            {
                cout << 'N' << " ";
                continue;
            }

            int ret = 0;

            for (size_t i = 0; i < it->second.size(); i++)
            {
                ret += (it->second)[i];
            }

            cout << ret << " ";
        }

        if (it->first == 1)
        {

            if (it->second.empty())
            {
                cout << 'N' << " ";
                continue;
            }

            int ret = 0;

            for (size_t i = 0; i < it->second.size(); i++)
            {
                if (i % 2 == 0)
                {
                    ret += (it->second)[i];
                }

                if (i % 2 == 1)
                {
                    ret -= (it->second)[i];
                }

            }

            cout << ret << " ";
        }

        if (it->first == 2)
        {

            if (it->second.empty())
            {
                cout << 'N' << " ";
                continue;
            }
            cout << it->second.size() << " ";
        }

        if (it->first == 3)
        {

            if (it->second.empty())
            {
                cout << 'N' << " ";
                continue;
            }

            int ret = 0;

            for (size_t i = 0; i < it->second.size(); i++)
            {
                ret += it->second[i];
            }

            cout << fixed << setprecision(1) << (float)ret / it->second.size() << " ";
        }

        if (it->first == 4)
        {

            if (it->second.empty())
            {
                cout << 'N';
                continue;
            }
            int ret = -1;

            for (size_t i = 0; i < it->second.size(); i++)
            {
                if (it->second[i] > ret)
                {
                    ret = it->second[i];
                }
            }

            cout << ret;
        }
    }

    return 0;
}
