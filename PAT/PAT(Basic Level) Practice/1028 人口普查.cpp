#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct person
{
    string name;
    string date;
} person;

bool cmp(person p1, person p2)
// 2022/08/12
{

    string str1 = p1.date;

    int year1 = atoi(str1.substr(0, 4).c_str());

    int month1 = atoi(str1.substr(5, 2).c_str());

    int day1 = atoi(str1.substr(8, 2).c_str());

    string str2 = p2.date;

    int year2 = atoi(str2.substr(0, 4).c_str());

    int month2 = atoi(str2.substr(5, 2).c_str());

    int day2 = atoi(str2.substr(8, 2).c_str());

    if (year1 != year2)
    {
        return year1 > year2;
    }

    if (month1 != month2)
    {
        return month1 > month2;
    }

    if (day1 != day2)
    {
        return day1 > day2;
    }
}

bool isRealDate(string str)
{
    int year = atoi(str.substr(0, 4).c_str());

    int month = atoi(str.substr(5, 2).c_str());

    int day = atoi(str.substr(8, 2).c_str());

    if (year > 2014)
    {
        return false;
    }

    if (year < 1814)
    {
        return false;
    }

    if (year == 2014 && month > 9)
    {
        return false;
    }

    if (year == 2014 && month == 9 && day > 6)
    {
        return false;
    }

    if (year == 1814 && month < 9)
    {
        return false;
    }

    if (year == 1814 && month == 9 && day < 6)
    {
        return false;
    }

    return true;
}

int main(int argc, char const *argv[])
{
    int count;

    vector<person> v;

    int ret = 0;

    cin >> count;

    for (size_t i = 0; i < count; i++)
    {

        string name;
        string date;

        cin >> name >> date;

        if (isRealDate(date))
        {
            person p;
            p.name = name;
            p.date = date;
            v.push_back(p);
        }
    }

    sort(v.begin(), v.end(), cmp);

    if (v.size() != 0)
    {
        cout << v.size() << " " << v.rbegin()->name << " " << v.begin()->name << endl;
    } else
        cout << 0;

    return 0;
}
