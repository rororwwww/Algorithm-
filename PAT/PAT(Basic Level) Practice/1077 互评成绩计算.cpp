#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

struct student
{
    int max = -1;
    int min = 101;
    int count = 0;
    int s_socre = 0;
    int t_socre = 0;
};


int main(int argc, char const *argv[])
{
    int count, m;
    cin >> count >> m;

    vector<student> v;

    for (size_t i = 0; i < count; i++)
    {
        student s;
        
        for (size_t i = 0; i < count; i++)
        {
            int score;
            cin >> score;

            if (i == 0)
            {
                s.t_socre = score;
                continue;
            }

            if (score >= 0 && score <= m)
            {
                s.count++;
                s.s_socre += score;
                
                if (score > s.max)
                {
                     s.max = score;
                }
                if (score < s.min)
                {
                     s.min = score;
                }
                
            }

        }

        v.push_back(s);
    }

    //计算分数
    for (size_t i = 0; i < v.size(); i++)
    {
        float s = (float)(v[i].s_socre - v[i].max - v[i].min) / (float)(v[i].count - 2);
        cout << round((v[i].t_socre + s) / 2.0) << endl;
    }
    

    return 0;
}
