#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    string s1[] = {"tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
    string s2[] = {"tret", "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
    int count;

    cin >> count;
    cin.get();

    for (size_t i = 0; i < count; i++)
    {
        string s;

        getline(cin, s);

        if (!isalpha(s[0]))
        {
            int i = stoi(s);

            if (i / 13 != 0)
            {
                cout << s2[i / 13];
            }

            if ((i / 13) && (i % 13))
                cout << " ";

            if (i % 13 != 0 || i == 0)
            {
                cout << s1[i % 13];
            }

            cout << endl;
        }
        else
        {
            int ret = 0;

            string first = s.substr(0, 3);
            string second;

            if (s.find(" ") != string::npos)
            {
                second = s.substr(4, 3);
            }

            int t1 = 0, t2 = 0;

            for (int j = 1; j <= 12; j++)
            {
                if (first == s1[j] || second == s1[j])
                    t2 = j;
                if (first == s2[j])
                    t1 = j;
            }

            cout << t1 * 13 + t2 << endl;;
        }
    }

    return 0;
}
