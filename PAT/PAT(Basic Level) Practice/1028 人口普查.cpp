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

int main(int argc, char const *argv[])
{
    int count;

    person old;
    old.date = "2014/09/06";
    person young;
    young.date = "1814/09/06";

    int sum = 0;

    cin >> count;

    for (size_t i = 0; i < count; i++)
    {
        string name , date;
        cin >> name;
        cin >> date;

        if (date > "2014/09/06" || date < "1814/09/06")
        {
            continue;
        }
        
        sum++;

        if (date > young.date)
        {
            young.name = name;
            young.date = date;
        }

        if (date < old.date)
        {
            old.name = name;
            old.date = date;
        }
        
    }

    if (sum == 0)
    {
        cout << 0;
        return 0;
    }
    
    cout << sum << " " << old.name << " " << young.name << endl;
    

    return 0;
}
