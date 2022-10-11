#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    string n, a, b;
    cin >> n >> a >> b;

    string ans;

    //保存进制
    int base[20] = {0};
    for (int i = n.size() - 1; i >= 0; i--)
    {
        if (n[i] == '0')
        {
            base[n.size() - i - 1] = 10;
        }
        else
        {
            base[n.size() - i - 1] = n[i] - '0';
        }
    }

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    if (a.size() > b.size())
    {
        b += string(a.size() - b.size(), '0');
    }
    else
    {
        a += string(b.size() - a.size(), '0');
    }

    //进位标记
    bool flag = false;

    //考虑两个5位变成6位
    for (size_t i = 0; i < a.size(); i++)
    {
        // 进位
        int n = 0;
        if (flag)
        {
            n = 1;
        }

        if ((a[i] - '0' + b[i] - '0' + n) >= base[i])
        {
            flag = true;
        }
        else
        {
            flag = false;
        }

        ans += '0' + ((a[i] - '0' + b[i] - '0' + n) % base[i]);
    }

    if (flag)
    {
        ans += "1";
    }
    
    reverse(ans.begin(), ans.end());

    int count = 0;
    //去末尾0
    for (size_t i = 0; i < ans.size() - 1; i++)
    {
        if (ans[i] == '0')
        {
            count++;
            continue;
        }

        break;
    }

    for (size_t i = count; i < ans.size(); i++)
    {
        cout << ans[i];
    }

    cout << endl;

    return 0;
}
