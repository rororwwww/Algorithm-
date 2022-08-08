#include <iostream>
#include <string>

using namespace std;

int a[3] = {0};

int main(int argc, char const *argv[])
{
    string s;

    cin >> s;

    int n = 2;

    for (size_t i = s.size(); i > 0; i--)
    {
        a[n] = s[i - 1] - '0';
        n--;
    }

    for (size_t i = 0; i < 3; i++)
    {

        int num = a[i];

        for (size_t t = 1; t <= num; t++)
        {
           if ( i == 0 )
           {
                cout << "B";
           }
           
           if ( i == 1 )
           {
                cout << "S";
           }

           if ( i == 2 )
           {
                cout << t;
           }     
           
        }
        
    }
    

    return 0;
}
