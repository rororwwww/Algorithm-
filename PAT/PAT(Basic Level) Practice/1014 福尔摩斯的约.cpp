#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    string s1, s2, s3, s4;

    char ch1, ch2;
    int pos;

    cin >> s1 >> s2 >> s3 >> s4;

    bool isFirst = true;

    size_t length = s1.length() < s2.length() ? s1.length() : s2.length();
    for (size_t i = 0; i < length; i++)
    {
        if (s1[i] == s2[i] && s1[i] >= 'A' && s1[i] <= 'G' && isFirst)
        {
            ch1 = s1[i];
            isFirst = false;
            continue;
        }

        if (s1[i] == s2[i]  && ((s1[i] >= 'A' && s1[i] <= 'N') || ((s1[i] >= '0' && s1[i] <= '9'))) && !isFirst)
        {
            ch2 = s1[i];
            break;
        }
    }

    length = s3.length() < s4.length() ? s3.length() : s4.length();
    for (size_t i = 0; i < length; i++)
    {
        if (s3[i] == s4[i] && ((s3[i] >= 'A' && s3[i] <= 'Z') || (s3[i] >= 'a' && s3[i] <= 'z')))
        {
            pos = i;
            break;
        }
    }

    string days[7] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};

    int i;

    if (ch2 <= '9')
    {
        i = ch2 - '0';
    }

    if (ch2 >= 'A')
    {
        i = ch2 - 'A' + 10;
    }

    cout << setfill('0');
    
    cout << days[ch1 - 'A'] << " " << setw(2) << i << ":"  << setw(2) << pos;

    return 0;
}
