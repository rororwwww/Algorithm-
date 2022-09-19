#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    int count;
    cin >> count;

    float ret;

    for (size_t i = 0; i < count; i++)
    {
        int n1, n2;
        cin >> n1 >> n2;
        
        float f = sqrt(n1 * n1 + n2 * n2);
        
        if (f > ret)
        {
            ret = f;
        }
        
    }

    cout << fixed << setprecision(2) << round(ret * 100) / 100 << endl;

    return 0;
}
