#include <iostream>
#include <string>

using namespace std;

void compress(string s)
{
    string ans;

    int count = 1;
    char c = s[0];
    for (auto it = s.begin() + 1; it != s.end(); it++)
    {

        if (*it == c)
        {
            count++;
        }
        else
        {

            if (count == 1)
            {
                ans += c;
            }
            else
            {
                ans += to_string(count) + c;
                count = 1;
            }
        }

        c = *it;
    }

    //追加最后一组c
    if (count == 1)
    {
        ans += c;
    }
    else
    {
        ans += to_string(count) + c;
        count = 1;
    }

    cout << ans << endl;
}

void decompress(string s)
{
    string ans;

    for (size_t i = 0; i < s.size(); i++)
    {
        string num;
        while (isdigit(s[i]))
        {
            num += s[i];
            i++;
        }

        if (!num.empty())
        {
            int n = atoi(num.c_str());

            for (size_t k = 0; k < n; k++)
            {
                ans += s[i];
            }
        }
        else
        {
            ans += s[i];
        }
    }

    cout << ans << endl;
}

int main(int argc, char const *argv[])
{
    char c;
    cin >> c;
    getchar();

    string s;
    getline(cin, s);

    if (c == 'C')
    {
        compress(s);
    }

    if (c == 'D')
    {
        decompress(s);
    }

    return 0;
}
