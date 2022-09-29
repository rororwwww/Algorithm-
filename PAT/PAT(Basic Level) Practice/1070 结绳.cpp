#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

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

    sort(v.begin(), v.end());

    float ret = v[0];
    for (size_t i = 1; i < count; i++)
    {
        ret = (ret + v[i]) / 2;
    }

    cout << (int)ret << endl;
    
    
    return 0;
}
