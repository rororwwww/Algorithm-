#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int count;
    
    cin >> count;

    for (size_t i = 0; i < count; i++)
    {
        long long a,b,c;
        cin >> a >> b >> c;

        if (a + b > c)
        {
            cout << "Case #"<< i + 1 << ": true" << endl;
        } else {
            cout << "Case #"<< i + 1<< ": false" << endl;
        }

    }
    

    return 0;
}
