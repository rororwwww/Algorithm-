#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    int count;
    cin >> count;

    float min = 200;
    float max = 0;
    string noob;
    string champion;

    for (size_t i = 0; i < count; i++)
    {
        string s;
        int x,y;
        
        cin >> s >> x >> y;

        if (sqrt(x*x + y*y) > max)
        {
            max = sqrt(x*x + y*y);
            noob = s;
        }

        if (sqrt(x*x + y*y) < min)
        {
            min = sqrt(x*x + y*y);
            champion = s;
        }
        
    }

    cout << champion << " " << noob << endl;
    
    return 0;
}
