#include <iostream>
#include <map>
using namespace std;

int main(int argc, char const *argv[])
{
    int count;

    map<int, int> m;

    cin >> count;

    for (size_t i = 0; i < count; i++)
    {  
        int n;
        int score;

        cin >> n >> score;

        m[n] += score;
    }

    int maxScore = -1;
    int maxNum  = -1;

    for (auto it = m.begin(); it != m.end(); it++)
    {
        if ((*it).second > maxScore)
        {
            maxNum = (*it).first;
            maxScore = (*it).second;
        }
        
    }
    
    cout << maxNum << " " << maxScore;
    

    return 0;
}
