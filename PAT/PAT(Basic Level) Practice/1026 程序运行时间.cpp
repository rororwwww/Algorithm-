#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    double c1 ,c2;
    cin >> c1 >> c2;

    int s = round((c2 - c1)/100.0);
    
    cout << setfill('0');

    cout << setw(2) << s / 3600 << ":" <<setw(2) << (s % 3600) / 60 << ":" <<setw(2) << s %60 << endl;

    return 0;
}
