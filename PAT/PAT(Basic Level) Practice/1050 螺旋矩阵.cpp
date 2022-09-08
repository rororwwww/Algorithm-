#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(int i1, int i2)
{
    return i1 > i2;
}

int main(int argc, char const *argv[])
{
    int count;
    int m, n;
    vector<int> v;

    cin >> count;

    for (size_t i = 0; i < count; i++)
    {
        int n;
        cin >> n;
        v.push_back(n);
    }

    sort(v.begin(), v.end(), compare);
    for (int i = 1; i <= sqrt(count); i++)
    {
        if (count % i == 0)
        {
            n = i;
            m = count / i;
        }
    }

    int a[10000][100];
    int flag = 0;
    int up = 0, down = m - 1;
    int left = 0, right = n - 1;
    while (true)
    {
        if (flag == count)
            break;
        for (int i = left; i <= right; i++)
        {
            a[up][i] = v[flag++];
        }
        if (flag == count)
            break;
        for (int i = up + 1; i <= down; i++)
        {
            a[i][right] = v[flag++];
        }
        if (flag == count)
            break;
        for (int i = right - 1; i >= left; i--)
        {
            a[down][i] = v[flag++];
        }
        if (flag == count)
            break;
        for (int i = down - 1; i >= up + 1; i--)
        {
            a[i][left] = v[flag++];
        }
        if (flag == count)
            break;
        up++;
        down--;
        left++;
        right--;
    }
    for (int i = 0; i < m; i++)
    {
        cout << a[i][0];
        for (int j = 1; j < n; j++)
        {
            cout << " " << a[i][j];
        }
        cout << endl;
    }

    return 0;
}
