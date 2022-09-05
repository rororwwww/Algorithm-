#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    int count;
    double e;
    int d;

    cin >> count >> e >> d;

    int sum1, sum2;
    sum1 = sum2 = 0;

    for (size_t i = 0; i < count; i++)
    {
        bool flag1, flag2;
        flag1 = flag2 = false;
        
        int count;
        cin >> count;

        int sum = 0;

        for (size_t i = 0; i < count; i++)
        {
            double d;
            cin >> d;

            if (d < e)
            {
                sum++;
            }
        }
        
        if (sum > count / 2)
        {
            sum1++;
            flag1 = true;
        } 

        if (flag1 && count > d)
        {
            sum2++;
            sum1--;
        }   

    }

    cout << fixed << setprecision(1) << ((double)sum1 / (double)count) * 100 << "%" << " " << fixed << setprecision(1) << ((double)sum2 / (double)count) * 100 << "%" << endl;

    return 0;
}
