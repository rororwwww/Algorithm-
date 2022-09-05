#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<string> v[3];

    for (size_t i = 0; i < 3; i++)
    {
        string s;
        getline(cin ,s);

        int pos = s.find("[");
        while (pos != string::npos)
        {
            string sub = s.substr(s.find("[", pos) + 1, s.find("]", pos) - s.find("[", pos) - 1);
            pos = s.find("[", pos + 1);
            v[i].push_back(sub);
        }
    }

    int count;
    cin >> count;
    
    for (size_t i = 0; i < count; i++)
    {
        string ret;
        bool is = true;
        
        for (size_t i = 0; i < 5; i++)
        {
            int n;
            cin >> n;

            switch (i)
            {
            case 0:

                if (n <= v[0].size() && n > 0)
                {
                    ret += v[0].at(n - 1);
                }
                else
                {
                    is = false;
                }

                break;
            
            case 1:

                if (n <= v[1].size() && n > 0)
                {
                    ret += "(";
                    ret += v[1].at(n - 1);
                }
                else
                {
                    is = false;
                }

                break;
            case 2:

                if (n <= v[2].size() && n > 0)
                {
                    ret += v[2].at(n - 1);
                }
                else
                {
                    is = false;
                }

                break;
            case 3:

                if (n <= v[1].size() && n > 0)
                {
                    ret += v[1].at(n - 1);
                }
                else
                {
                    is = false;
                }

                break;
            case 4:

                if (n <= v[0].size() && n > 0)
                {
                    ret += ")";
                    ret += v[0].at(n - 1);
                }
                else
                {
                    is = false;
                }

                break;

            default:
                break;
            }

            if (!is)
            {
                break;
            }
        }

        if (is)
        {
            cout << ret << endl;
        } else {
            cout << "Are you kidding me? @\\/@" << endl;
        }
        
    }

    return 0;
}
