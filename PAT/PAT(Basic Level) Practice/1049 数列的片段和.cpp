#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    cin >> n;
    long double t;
    long double sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        sum += (n - i) * t * (i + 1);
    }
    cout << fixed << setprecision(2) << sum;
    return 0;
}
///如果改用double类型数据测试点二会出现错误，因为如果（n-1）*t*(i+1)的数据精度可能超过double
