#include <string>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    getline(cin, s);

    int sum = 0;

    for (size_t i = 0; i < s.length(); i++)
    {
        if (isalpha(s[i]))
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                sum += s[i] - 'A' + 1;
            }

            if (s[i] >= 'a' && s[i] <= 'z')
            {
                sum += s[i] - 'a' + 1;
            }
        }
    }

    int zero = 0;
    int one = 0;

    while (sum)
    {
        if (sum % 2 == 0)
        {
            zero++;
        }
        else
        {
            one++;
        }

        sum = sum / 2;
    }
    
    cout << zero << " " << one << endl;


    return 0;
}
