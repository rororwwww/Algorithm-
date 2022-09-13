#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct student
{
    string name;
    int height;
} student;

student s[10000];

bool compare(student s1, student s2)
{
    if (s1.height != s2.height)
    {
        return s1.height > s2.height;
    }
    
    return s1.name < s2.name;
    
}

int main(int argc, char const *argv[])
{
    int count;
    int k;
    
    vector<student> v;

    cin >> count >> k;
    int m = count / k;
    int last = m + count % k;

    for (size_t i = 0; i < count; i++)
    {
        student s;
        cin >> s.name >> s.height;
        v.push_back(s);
    }

    sort(v.begin(), v.end(), compare);

    // for (size_t i = 0; i < count; i++)
    // {
    //     cout << v[i].name << " ";
    // }
    // cout << endl;
    
    int flag = 0;
    int sum = 0;

    for (size_t i = 0; i < count; i += m)
    {

        flag = 0;

        if (i == 0)
        {
            m = last;
        }
        else
        {
            m = count / k;
        }

        for (size_t n = 0; n < m; n++)
        {
            if (n % 2 == 1)
            {
                flag++;
            }

            // n = 0  flag = 0; // 中间
            // n = 1  flag = 1; // 左边 第二高
            // n = 2  flag = -1; // 右边 第三高
            // n = 3  flag = 2;

            // cout << i << " " << m << " " << n << " " << flag << endl;
            // cout << v[i + n].name << endl;

            s[sum + m / 2 - flag] = v[i + n];
            flag = -flag;
        }

        sum += m;
    }

    sum = 0;

    for (size_t i = 0; i < k; i++)
    {

        if (i == 0)
        {
            m = last;
        }
        else
        {
            m = count / k;
        }

        for (size_t n = 0; n < m; n++)
        {
            if (n != 0)
            {
                cout << " ";
            }
            
            cout << s[sum + n].name;
        }

        cout << endl;
        
        sum += m;
    }

    return 0;
}
