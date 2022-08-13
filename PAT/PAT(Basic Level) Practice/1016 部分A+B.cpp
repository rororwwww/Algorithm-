#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    string s1, s2;
    char c1,c2;

    cin >> s1 >> c1 >> s2 >> c2;

    int count1 = 0;
    int count2 = 0;

    for (size_t i = 0; i < s1.length(); i++)
    {
        if (s1[i] == c1)
        {
            count1++;
        }
    }

    s1.clear();

    for (size_t i = 0; i < count1; i++)
    {
        s1 += c1;
    }

    for (size_t i = 0; i < s2.length(); i++)
    {
        if (s2[i] == c2)
        {
            count2++;
        }
    }

    s2.clear();

    for (size_t i = 0; i < count2; i++)
    {
        s2 += c2;
    }

    cout << atoi(s1.c_str()) + atoi(s2.c_str());
    return 0;
}
