#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int sum = 0;

    int count;
    
    cin >> count;

    vector<int> v;

    for (size_t i = 0; i < count; i++)
    {
        int n;
        cin >> n;
        v.push_back(n);
    }

    for (size_t i = 0; i < v.size(); i++)
    {
        for (size_t n = 0; n < v.size(); n++)
        {
            int num = v[i] * 10;
            if (n != i)
            {
                num += v[n];
                sum += num;
            }
            
        }
        
    }

    cout << sum << endl;

    return 0;
}

