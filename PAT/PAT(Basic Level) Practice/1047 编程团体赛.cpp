#include <iostream>
#include <map>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    int count;
    cin >> count;

    map<int, int> m;

    for (size_t i = 0; i < count; i++)
    {
        int n,k,score;
        scanf("%d-%d %d",&n, &k, &score);

        m[n] += score;
    }

    int max = -1;
    int team;

    for (auto it = m.begin(); it != m.end(); it++)
    {
        if (it->second > max)
        {
            team = it->first;
            max = it->second;
        }
        
    }
    

    cout << team << " " << max;

    return 0;
}
