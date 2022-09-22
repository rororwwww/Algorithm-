#include <iostream>
#include <string>

using namespace std;
int main(int argc, char const *argv[])
{
    string password;
    int count;

    cin >> password >> count;

    getchar();
    
    int n = 0;
    while(1) {
        string s;
        getline(cin, s);
        
            
        if (n == count)
        {
            cout << "Account locked" << endl;
            break;
        }

        if (s == "#")
        {
            break;
        }
        
        if (s != password && n <= count)
        {
            cout << "Wrong password: " << s << endl;
        }
        
        if (s == password && n <= count)
        {
            cout << "Welcome in" << endl;
            break;
        }
        
        n++;
    }

    return 0;
}
