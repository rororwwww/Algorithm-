#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int count,n;

    cin >> count;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < count; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }

    vector<int> ret(v.size());

    for (int i = 0; i < v.size(); i++)
    {
        ret[(i + n) % v.size()] = v[i];
    }

    for (int i = 0; i < ret.size(); i++)
    {
        if (i != 0)
        {
            cout << " ";
        }
        
            cout << ret[i];
    }
    
    
    return 0;
}
