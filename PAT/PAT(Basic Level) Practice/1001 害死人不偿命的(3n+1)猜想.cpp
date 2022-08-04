#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    
    int n;
    cin >> n;

    if (n <= 0 || n >1000)
    {
        return -1;
    }
    
    int count = 0;

    while (n != 1)
    {
        if (0 == (n & 1))
        {

            n = n / 2;
        }
        else
        {

            n = (3 * n + 1) / 2;
        }

        count++;
    }

    cout << count <<endl;

    return 0;
}
