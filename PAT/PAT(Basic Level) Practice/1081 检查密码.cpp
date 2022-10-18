#include <iostream>
#include <string>

using namespace std;



void checkpassword(string passwd)
{
    do
    {
        if (passwd.length() < 6)
        {
            cout << "Your password is tai duan le." << endl;
            break;
        }

        bool hasNum = false;
        bool hasAlpha = false;

        for (size_t i = 0; i < passwd.length(); i++)
        {
            
            if (!(isalnum(passwd[i])) && (passwd[i] != '.'))
            {
                cout << "Your password is tai luan le." << endl;
                return;
            }

            if (isalpha(passwd[i]))
            {
                hasAlpha = true;
            }
            
            if (isdigit(passwd[i]))
            {
                hasNum = true;
            }
            
        }

        if (!hasAlpha)
        {
            cout << "Your password needs zi mu." << endl;
            break;
        }

        if (!hasNum)
        {
            cout << "Your password needs shu zi." << endl;
            break;
        }
        
        
        cout << "Your password is wan mei." << endl;

    } while (0);
}

int main(int argc, char const *argv[])
{
    int count;
    cin >> count;
    getchar();

    for (size_t i = 0; i < count; i++)
    {
        string s;
        getline(cin, s);
        checkpassword(s);
    }

    return 0;
}
