#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    string bad;
    string s;

    getline(cin, bad);
    getline(cin ,s);

    bool isUpperBroken = false;

    if (bad.find('+') != string::npos)
    {
        isUpperBroken = true;
    }


    size_t length = bad.size();

    for (size_t i = 0; i < length; i++)
    {   
    
        if (isupper(bad[i]))
        {
            bad += tolower(bad[i]);
        }
        
    }

    size_t n;
    size_t pos = 0;
    string ret;
    
    while (n != string::npos)
    {
        n = s.find_first_not_of(bad, pos);
        pos = n + 1;
        
        if (isUpperBroken && isupper(s[n]))
        {
            continue;
        }
        
        ret += s[n];

    }
    
    
    cout << ret << endl;

    return 0;
}
