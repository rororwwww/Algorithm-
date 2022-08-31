#include <iostream>
#include <vector>
#include <algorithm>
#define N 100000

using namespace std;
int main(int argc, char const *argv[])
{
    int count;
    cin >> count;

    int a[N] = {0};
    int max[N] = {0};
    int min[N] = {0};

    int maxFlag = 0;

    for (size_t i = 0; i < count; i++)
    {
        int n;
        cin >> n;
        a[i] = n;

        max[i] = maxFlag;

        if (n > maxFlag)
        {
            maxFlag = n;
        }
    }

    int minFlag = a[count - 1] + 1;

    for (int i = count - 1; i >=0; i--)
    {
        min[i] = minFlag;

        if (a[i] < minFlag)
        {
            minFlag = a[i];
        }
    }
    
    vector<int> v;
    for (size_t i = 0; i < count; i++)
    {
        if (a[i] > max[i] && a[i] < min[i])
        {
            v.push_back(a[i]);
        }
        
    }

    if (v.size() != 0)
    {
        cout << v.size() << endl;
    } else {
        cout << "0" << endl;
        cout << endl;
    }
    
    
    sort(v.begin(), v.end());
    
    for (auto it = v.begin(); it != v.end(); it++)
    {
        if (it != v.begin())
        {
            cout << " "; 
        }
        
        cout << *it;
    }
    
    
    return 0;
}
