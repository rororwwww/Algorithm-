#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

bool compare(pair<double, double> p1, pair<double, double> p2)
{
    return p1.second > p2.second;
}

int main(int argc, char const *argv[])
{
    int count, sum;
    cin >> count >> sum;

    vector< pair<double, double> > v(count);

    for (size_t k = 0; k < 2; k++)
    {
        for (size_t i = 0; i < count; i++)
        {
            double n;
            cin >> n;

            if (k == 0)
            {
                v.at(i).first = n;
            }

            if (k == 1)
            {
                v.at(i).second = n;
            }
        }
    }

    for (size_t i = 0; i < v.size(); i++)
    {
        v.at(i).second = v.at(i).second / v.at(i).first;
    }

    sort(v.begin(), v.end(), compare);

    int i = 0;
    float ret = 0;

    while (sum > 0 && i < v.size())
    {
        int n = sum > v.at(i).first ? v.at(i).first : sum;

        ret += n * v.at(i).second;

        sum = sum - v.at(i).first;

        i++;
    }

    cout << fixed << setprecision(2) << ret;

    return 0;
}
