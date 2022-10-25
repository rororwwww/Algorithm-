#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <cctype>

struct School
{
    int student = 0;
    double score = 0;
};

using namespace std;

bool cmp(pair<string, School> p1, pair<string, School> p2)
{
    if (p1.second.score != p2.second.score)
    {
        return p1.second.score > p2.second.score;
    }

    if (p1.second.student != p2.second.student)
    {
        return p1.second.student < p2.second.student;
    }

    return p1.first < p2.first;
}

int main(int argc, char const *argv[])
{
    int count;
    cin >> count;

    map<string, School> m;

    for (size_t i = 0; i < count; i++)
    {
        string s;
        double socre;
        string school;
        cin >> s >> socre >> school;

        transform(school.begin(), school.end(), school.begin(), ::tolower);

        m[school].student++;
        if (s[0] == 'B')
        {
            m[school].score += socre / 1.5;
        }

        if (s[0] == 'A')
        {
            m[school].score += socre;
        }

        if (s[0] == 'T')
        {
            m[school].score += socre * 1.5;
        }
    }

    cout << m.size() << endl;

    vector<pair<string, School>> v;

    for (auto it = m.begin(); it != m.end(); it++)
    {
        (*it).second.score = (int)(*it).second.score;
        v.push_back(*it);
    }

    sort(v.begin(), v.end(), cmp);

    int c = 1;

    cout << c << " " << v[0].first << " " << v[0].second.score << " " << v[0].second.student << endl;

    for (size_t i = 1; i < v.size(); i++)
    {
        //和上一个不重复
        if ( v[i].second.score != v[i - 1].second.score)
        {
            c = i + 1;
        }

        cout << c << " " << v[i].first << " " << v[i].second.score << " " << v[i].second.student << endl;
    }

    return 0;
}
