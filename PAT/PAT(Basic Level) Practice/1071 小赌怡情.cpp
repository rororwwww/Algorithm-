#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    int x, count;
    cin >> x >> count;

    for (size_t i = 0; i < count; i++)
    {
        int n1, b, t, n2;
        cin >> n1 >> b >> t >> n2;

        if (x == 0)
        {
            cout << "Game Over." << endl;
            break;
        }

        if (t > x)
        {
            cout << "Not enough tokens.  Total = " << x << "." << endl;
            continue;
        }

        if (b == 1 && n2 > n1)
        {
            x += t;
            cout << "Win " << t << "!  Total = " << x << "." << endl;
        }

        else if (b == 0 && n2 < n1)
        {
            x += t;
            cout << "Win " << t << "!  Total = " << x << "." << endl;
        }
        else
        {
            x -= t;
            cout << "Lose " << t << ".  Total = " << x << "." << endl;
        }
    }

    return 0;
}
