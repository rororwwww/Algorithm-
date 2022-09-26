#include <iostream>
#include <string>
#include <map>
#include <cmath>

using namespace std;

int a[1000][1000];

int main(int argc, char const *argv[])
{
    int m, n, tol;

    cin >> m >> n >> tol;
    map<int,int> num;

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            int n;
            cin >> n;
            a[i][j] = n;
            num[n]++;
        }
    }

    map<pair<int, int>, int> m_map;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            //不唯一的点
            if (num[a[i][j]] != 1)
            {
                continue;
            }
            
            // 左上
            if ((j - 1) >= 0 && (i - 1) >= 0)
            {
                if (fabs(a[i - 1][j - 1] - a[i][j]) <= tol)
                {
                    continue;
                }
            }

            //左
            if ((j - 1) >= 0)
            {
                if (fabs(a[i][j - 1] - a[i][j]) <= tol)
                {
                    continue;
                }
            }

            //左下
            if ((j - 1) >= 0 && (i + 1) <= n)
            {
                if (fabs(a[i + 1][j - 1] - a[i][j]) <= tol)
                {
                    continue;
                }
            }

            //上
            if ((i - 1) >= 0)
            {
                if (fabs(a[i - 1][j] - a[i][j]) <= tol)
                {
                    continue;
                }
            }

            //下
            if ((i + 1) <= n)
            {
                if (fabs(a[i + 1][j] - a[i][j]) <= tol)
                {
                    continue;
                }
            }

            //右上
            if ((j + 1) <= m && (i - 1) >= 0)
            {
                if (fabs(a[i - 1][j + 1] - a[i][j]) <= tol)
                {
                    continue;
                }
            }

            //右
            if ((j + 1) <= m)
            {
                if (fabs(a[i][j + 1] - a[i][j]) <= tol)
                {
                    continue;
                }
            }

            //右下
            if ((j + 1) <= m && (i + 1) <= n)
            {
                if (fabs(a[i + 1][j + 1] - a[i][j]) <= tol)
                {
                    continue;
                }
            }
            
            // m_map.insert(pair<pair<int, int>, int>(pair<int, int>(i, j), a[i][j]));
            m_map[pair<int, int>(i,j)] = a[i][j];
        }
    }

    if (m_map.size() == 1)
    {
        auto it = m_map.begin();
        cout << "(" << (*it).first.second + 1 << ", " << (*it).first.first + 1<< ")" << ": " << (*it).second << endl;
    }
    
    if (m_map.size() == 0)
    {
        cout << "Not Exist" << endl;
    }

    if (m_map.size() > 1)
    {
        cout << "Not Unique" << endl;
    }

    return 0;
}
