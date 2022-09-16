#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool compare(int a, int b)
{
    return a > b;
}

int main(int argc, char const *argv[])
{
    int count;
    cin >> count;
    
    vector<int> v;
    for (size_t i = 0; i < count; i++)
    {
        int n;
        cin >> n;
        v.push_back(n);
    }

    sort(v.begin(), v.end(), compare);
        
    for (size_t i = count; i >= 0; i--)
    {
        if (i == 0)
        {
            cout << "0" << endl;
            break;
        }
        

        if (v[i - 1] > i)
        {
            cout << i << endl;
            break;
        }
        
    }

    return 0;
}
