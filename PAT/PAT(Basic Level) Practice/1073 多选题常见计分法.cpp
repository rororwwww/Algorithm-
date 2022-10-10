#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

typedef struct Task
{
    int score;
    string answer;
    int WrongCount = 0;
    int WrongVector[5] = {0};
} Task;

int main(int argc, char const *argv[])
{
    int n, m;
    cin >> n >> m;

    vector<Task> v;
    vector<float> student(n, 0);

    for (size_t i = 0; i < m; i++)
    {
        Task t;

        int score;
        cin >> score;

        t.score = score;

        int count, anscount;
        cin >> count >> anscount;

        string s;

        for (size_t i = 0; i < anscount; i++)
        {
            char c;
            cin >> c;
            s += c;
        }

        t.answer = s;

        v.push_back(t);
    }

    for (size_t k = 0; k < n; k++)
    {

        for (size_t i = 0; i < m; i++)
        {
            getchar();

            int count;
            scanf("(%d", &count);

            string ans;

            for (size_t i = 0; i < count; i++)
            {
                char c;
                scanf(" %c)", &c);
                ans += c;
            }

            float score = 0.0;

            bool flag = true;

            for (size_t m = 0; m < ans.size(); m++)
            {
                // 错误
                if (v[i].answer.find(ans[m]) == string::npos)
                {
                    score = 0.0;
                    flag = false;
                    v[i].WrongVector[ans[m] - 'a']++;
                }
            }

            //漏选排查
            for (size_t n = 0; n < v[i].answer.size(); n++)
            {
                if (ans.find(v[i].answer[n]) == string::npos)
                {
                    v[i].WrongVector[ v[i].answer[n] - 'a']++;
                }
                
            }

            if (flag)
            {
                //满分
                if (v[i].answer.size() == ans.size())
                {
                    score = v[i].score;
                }
                //半对
                else
                {
                    score = v[i].score / 2.0;
                }
            }

            student[k] += score;
        }
    }

    //输出均分
    for (size_t i = 0; i < student.size(); i++)
    {
        cout << fixed << setprecision(1) << student[i] << endl;
    }

    //每个题WrongCount统计
    for (size_t i = 0; i < v.size(); i++)
    {
        int max = 0;
        for (size_t n = 0; n < 5; n++)
        {
            if (max < v[i].WrongVector[n])
            {
                max = v[i].WrongVector[n];
            }
        }

        v[i].WrongCount = max;
    }
    
    //寻找错误数量最多的题
    int max = 0;
    for (size_t i = 0; i < v.size(); i++)
    {
        if (max < v[i].WrongCount)
        {
            max = v[i].WrongCount;
        }
    }

    if (max == 0)
    {
        cout << "Too simple" << endl;
    }
    else
    {
        for (size_t i = 0; i < v.size(); i++)
        {
            if (v[i].WrongCount == max)
            {
                //寻找错最多的选项
                int max = 0;
                for (size_t n = 0; n < 5; n++)
                {
                    if (max < v[i].WrongVector[n])
                    {
                        max = v[i].WrongVector[n];
                    }
                }

                for (size_t n = 0; n < 5; n++)
                {
                    if (max == v[i].WrongVector[n])
                    {
                        cout << max << " ";
                        char c = 'a' + n;
                        cout << i + 1 << "-" << c << endl;
                    }
                }

            }
        }
    }

    return 0;
}
