#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    int m, n, a, b, k;
    scanf("%d %d %d %d %d", &m, &n, &a, &b, &k);

    cout << setfill('0');

    for (size_t i = 0; i < m; i++)
    {
        for (size_t i = 0; i < n; i++)
        {
            int n;
            scanf("%d", &n);

            if (i != 0)
            {
                cout << " ";
            }

            if (a <= n && n <= b)
            {
                cout << setw(3) << k;
            }
            else
            {
                cout << setw(3) << n;
            }
        }

        cout << endl;
    }

    return 0;
}
