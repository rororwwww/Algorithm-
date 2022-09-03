#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    double r1,r2,p1,p2;
    cin >> r1 >> p1 >> r2 >> p2;

    cout << fixed << setprecision(2);

    double d1, d2;

    d2 = r1 * r2 * sin(p1 + p2);
    d1 = r1 * r2 * cos(p1 + p2);

    if (fabs(r1 * r2 * sin(p1 + p2)) < 0.005)
    {
        d2 = 0;
    }
    
    if (fabs(r1 * r2 * cos(p1 + p2)) < 0.005)
    {
        d1 = 0;
    }
    

    if ( d2  >= 0)
    {
        cout << d1 << "+" << d2 << "i" << endl;
    } else
        cout << d1 << d2 << "i" << endl;

    return 0;
}