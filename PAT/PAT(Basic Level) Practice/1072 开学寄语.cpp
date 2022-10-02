#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, m;
    cin >> n >> m;

    vector<string> forbid;
    for (size_t i = 0; i < m; i++)
    {
        string s;
        cin >> s;
        forbid.push_back(s);
    }

    int countA = 0;
    int countB = 0;

    for (size_t i = 0; i < n; i++)
    {
        string name;
        int count;
        cin >> name >> count;

        bool isforbid = false;
        bool isName = true;

        bool firstForbid = true;
        
        for (size_t i = 0; i < count; i++)
        {
            string s;

            cin >> s;

            isforbid = false;

            if (find(forbid.begin(), forbid.end(), s) != forbid.end())
            {
                isforbid = true;
            }
            
            if (isforbid && isName)
            {
                cout << name << ": ";
                countA++;
                isName = false;
            }

            if (isforbid)
            {
                if (!firstForbid)
                {
                    cout << " ";
                }
                
                cout << setfill('0');
                cout << setw(4) << s;
                countB++;
                firstForbid = false;
            }
            
        }   
        
        if (!isName)
        {
            cout << endl;
        }
        
    }
    
    cout << countA << " " << countB << endl;

    return 0;
}
