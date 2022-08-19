#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    char ch;
    int n;
    cin >> n >> ch;

    int ret = 0;

    size_t i = 1;

    do
    {
        i = i + 2;

        ret = (i + 1) * (i + 1) / 2 - 1;

    } while (ret <= n);

    int count = 0;

    for (int n = i - 2; n > 0; n -= 2)
    {

        for (size_t s = 0; s < (i - 2 - n) / 2; s++)
        {
            cout << " ";
        }

        for (size_t s = 0; s < n; s++)
        {
            cout << ch;
            count++;
        }

        cout << endl;
    }

    for (int n = 3; n <= i - 2; n += 2)
    {

        for (size_t s = 0; s < (i - 2 - n) / 2; s++)
        {
            cout << " ";
        }

        for (size_t s = 0; s < n; s++)
        {
            cout << ch;
            count++;
        }

        cout << endl;
    }

    cout << n - count << endl;

    return 0;
}
