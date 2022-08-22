#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int count, p;

    cin >> count >> p;

    vector<long long> v;

    for (size_t i = 0; i < count; i++)
    {
        long long n;
        cin >> n;
        v.push_back(n);
    }

    sort(v.begin(), v.end());

    int max = 0;

    for (size_t i = 0; i < v.size(); i++)
    {
        
        int sum= 0;

        if ( i + max > v.size() ||v[i + max] > v[i] * p )
        {
            continue;
        }

        for (size_t k = i; k < v.size(); k++)
        {
            
            if (v[k] > v[i] * p)
            {
                break;
            }

            sum++; 
        }

        if (sum > max)
        {
            max = sum;
        }
        
    }

    cout << max;
    
    
    return 0;
}
