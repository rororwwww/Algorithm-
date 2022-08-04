#include <iostream>
#include <string>
#include <vector>

using namespace std;

const char* num[10] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};

int main(int argc, char const *argv[])
{

    int sum = 0;

    string str;
    
    cin >> str;

    for (int i = str.length() - 1; i >= 0; i--)
    {
        sum += str[i] - '0';
    }

    vector<string> v;

    while (sum != 0)
    {
        v.insert(v.begin(),num[sum%10]);
        sum = sum /10;
    }    

    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it;

        if (it+1 != v.end())
        {
            cout << " ";
        }
    }

    cout << endl;
    
    
    return 0;
}
