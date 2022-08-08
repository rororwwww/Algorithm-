#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    vector<int> v;

    for (size_t i = 2; i <= n; i++)
    {
        int count = 0;

        for (size_t k = 2; k <= sqrt(i); k++)
        {
            if (i % k == 0)
            {
                count++;
                break;
            }
        }

        if (count == 0)
        {
            v.push_back(i);
        }
        
    }

    int ret = 0;

    int size = v.size() - 1;

    for (int i = 0; i < size; i++)
    {
        if (v[i + 1] - v[i] == 2)
        {
            ret++;
        }
    }
    
    cout << ret;
    
    return 0;
}
