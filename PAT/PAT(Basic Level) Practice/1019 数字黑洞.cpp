#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>
#include <sstream>

using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    cin >> s;

    int ret = -1;

    stringstream ss;
    ss << setw(4) << setfill('0') << stoi(s);
    ss >> s;

    ss.clear();

    cout << setfill('0');

    int i1,i2;
    while (ret != 6174 && ret!= 0)
    {

        sort(s.begin(), s.end());

        i1 = stoi(s);

        reverse(s.begin(), s.end());

        i2 = stoi(s);

        ret = i2 - i1;

        cout << setw(4) << i2 << " "
             << "-"
             << " " << setw(4) << i1 << " "
             << "="
             << " " << setw(4) << i2 - i1 << endl;

        ss << setw(4) << setfill('0') << ret;
        ss >> s;

        ss.clear();

    }

    return 0;
}
