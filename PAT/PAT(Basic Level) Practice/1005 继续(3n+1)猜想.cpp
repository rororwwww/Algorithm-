#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(int a, int b){
    return a > b;
}

int main(int argc, char const *argv[])
{
    int count;

    cin >> count;

    map<int,int> m;

    vector<int> v;
    

    for (size_t i = 0; i < count; i++)
    {
        int n;
        cin >> n;

        v.push_back(n);
        
        while (n != 1 )
        {
             m[n]++;
            
            if (0 == (n & 1))
            {

                n = n / 2;
            }
            else
            {

                n = (3 * n + 1) / 2;
            }

        }

    }

    sort(v.begin(), v.end(), cmp);

    int flag = 0;

    for (size_t i = 0; i < v.size(); i++)
    {
        if (m[v[i]] == 1)
        {
            if (flag == 1) 
                cout << " ";
           
            cout << v[i];

            flag = 1;
        }
        
    }
        
    return 0;
}
