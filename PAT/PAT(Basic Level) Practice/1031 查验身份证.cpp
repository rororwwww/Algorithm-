#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int widget[] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    char M[] = {'1','0','X','9','8','7','6','5','4','3','2'};

    int count;
    cin >> count;

    bool allPass = true;

    for (size_t i = 0; i < count; i++)
    {
        string s;
        cin >> s;

        int sum = 0;

        for (size_t i = 0; i < 17; i++)
        {
            sum += (s[i] - '0') * widget[i];
        }
        

        if (M[ sum % 11 ] != s[17])
        {
            cout << s << endl;

            allPass = false;
        }
        
    }
    

    if (allPass)
    {
        cout << "All passed" << endl;
    }
    

    return 0;
}
