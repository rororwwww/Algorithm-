#include <iostream>
#include <algorithm>
#include <array>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    cin >> s;

    array<int,10> a = {};

    for (size_t i = 0; i < s.size(); i++)
    {
        a[s[i] - '0']++;
    }

    for (size_t i = 0; i < a.size(); i++)
    {
        if (a[i] != 0)
        {
            cout << i << ":" << a[i] << endl;
        }
        
    }
    


    

    return 0;
}
