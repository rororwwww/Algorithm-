#include <string>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int i1,i2;
    cin >> i1 >> i2;

    string s = to_string(i1 * i2);
    string ans = string(s.rbegin(), s.rend());

    cout << atoi(ans.c_str()) << endl;

    return 0;
}
