#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool compare(pair< string, pair<int, int> > p1, pair< string, pair<int, int> > p2)
{
    if ((p1.second.first + p1.second.second) != (p2.second.first + p2.second.second))
    {
        return (p1.second.first + p1.second.second) > (p2.second.first + p2.second.second);
    }

    if (p1.second.first != p2.second.first)
    {
        return p1.second.first > p2.second.first;
    }
    
    return p1.first < p2.first;
     
}

int main(int argc, char const *argv[])
{

    vector< pair<string, pair<int, int> > > v[4];
    // 1. 德才兼备  (德，才 > 分数线， 总分)
    // 2. 有德无才  (德 > 分数线 > 才， 总分)
    // 3. 无才无德 （分数线 > 德 > 才 ， 总分）
    // 4. 普通人   (德，才过基础线 但 < 分数线， 总分)
    // 当某类考生中有多人总分相同时，按其德分降序排列；若德分也并列，则按准考证号的升序输出。

    int count, l, h;
    cin >> count >> l >> h;

    for (size_t i = 0; i < count; i++)
    {
        string s;

        int de, cai;

        cin >> s >> de >> cai;

        if (de >= l && cai >= l)
        {
            if (de >= h && cai >= h)
            {
                v[0].push_back( pair<string, pair<int , int> >(s ,pair<int , int>(de, cai)) ) ;
                continue;
            }

            if (de >= h && cai < h)
            {
                v[1].push_back( pair<string, pair<int , int> >(s ,pair<int , int>(de, cai)) ) ;
                continue;
            }

            if (de >= cai && de < h)
            {
                v[2].push_back( pair<string, pair<int , int> >(s ,pair<int , int>(de, cai)) ) ;
                continue;
            }

            v[3].push_back( pair<string, pair<int , int> >(s ,pair<int , int>(de, cai)) ) ;
            
        }
    }

    cout << v[0].size() + v[1].size() + v[2].size() + v[3].size() << endl;

    for (size_t i = 0; i < 4; i++)
    {
        sort(v[i].begin(), v[i].end(), compare);

        for (auto it = v[i].begin(); it != v[i].end(); it++)
        {
            cout << (*it).first << " " <<  (*it).second.first << " " << (*it).second.second << endl; 
        }

    }

    return 0;
}
