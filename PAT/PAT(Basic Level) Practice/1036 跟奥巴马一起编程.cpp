#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int count;
    char c;

    cin >> count;
    cin >> c;

    for (size_t k = 0; k < round(count / 2.0); k++)
    {
        for (size_t i = 0; i < count; i++)
        {

            if (k != 0 && k != round(count / 2.0) - 1 && i != 0 && i != count - 1 )
            {
                cout << " ";
            } else
            {
                cout << c;
            }
        }
        
        cout << endl;
    }
    

    return 0;
}

