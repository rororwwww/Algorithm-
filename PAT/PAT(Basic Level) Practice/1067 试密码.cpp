#include <iostream>
#include <string>

using namespace std;
int main(int argc, char const *argv[])
{
    string password;
    int count;

    cin >> password >> count;

    getchar();
    for (size_t i = 0; i < count; i++)
    {
        string s;
        getline(cin, s);

        if (s == "#")
        {
            break;
        }

        if (s != password)
        {
            cout << "Wrong password: " << s << endl;
        }
        
        if (s == password)
        {
            cout << "Welcome in" << endl;
            goto END;
        }
        
        
    }

    cout << "Account locked" << endl;

END:
    return 0;
}
