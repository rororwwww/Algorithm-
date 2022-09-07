#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <sstream>

using namespace std;

int main(int argc, char const *argv[])
{
    int count;

    cin >> count;

    int sum = 0;
    double d = 0;

    for (size_t i = 0; i < count; i++)
    {
        string s;

        cin >> s;

        float f = atof(s.c_str());

        stringstream ss;
        ss.precision(2);
        ss.setf(std::ios::fixed);//保留小数位
        ss << f;
        
        string s2 = ss.str();

        // 非数字类非法
        if (s2.substr(0, s.length()) != s)
        {
            cout << "ERROR: " << s << " is not a legal number" << endl;
            continue;
        }

        // 精度类非法
        if (s.find(".") == string::npos)
        {
            
        } else if (s.length() - s.find(".") - 1 > 2)
        {
            cout << "ERROR: " << s << " is not a legal number" << endl;
            continue;
        }

        // 范围类非法
        if (fabs(f) > 1000)
        {
            cout << "ERROR: " << s << " is not a legal number" << endl;
            continue;
        }

        d += f;
        sum++;
    }

    if (sum == 0)
    {
        cout << "The average of 0 numbers is Undefined" << endl;
    }
    else if (sum == 1)
    {
        cout << "The average of 1 number is " << fixed << setprecision(2) << d << endl;
    } else {
        cout << "The average of " << sum << " numbers is " << fixed << setprecision(2) << d / sum << endl;
    }

    return 0;
}
