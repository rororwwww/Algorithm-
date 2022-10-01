#include <iostream>
#include <string>
#include <vector>

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

    for (size_t i = 0; i < n; i++)
    {
        string name;
        int count;
        cin >> name >> count;

        bool isforbid = false;
        bool isName = true;
        
        for (size_t i = 0; i < count; i++)
        {
            
            if (isforbid && isName)
            {
                cout << ""
            }
        }   
        
       
        

    }
    
    
    return 0;
}
