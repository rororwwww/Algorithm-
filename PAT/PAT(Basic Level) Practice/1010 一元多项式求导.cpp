#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int i;

    vector<int> vn;
    vector<int> vx;

    int count = 1;

    while (cin >> i)
    {

        if (count % 2 == 0 && i != 0)
        {
            vx.push_back(i);
        }

        if (count % 2 == 1 && i != 0)
        {
            vn.push_back(i);
        }

        count++;
    }

    count = 0;

    for (size_t i = 0; i < vx.size(); i++)
    {

        if (vx[i] != 0)
        {
            if (count != 0)
            {
                cout << " ";
            }
            cout << vn[i] * vx[i] << " " << vx[i] - 1;
        }

        count = 1;
    }

    if (vx.size() == 0)
    {
        cout << "0 0";
    }
    

    return 0;
}
