#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int count;

    cin >> count;

    int ret1, ret2;

    ret1 = ret2 = 0;

    for (size_t i = 0; i < count; i++)
    {
        int i1,i2,i3,i4;
        cin >> i1 >> i2 >> i3 >> i4;

        if (i2 == i1 + i3 &&  i4 != i1 + i3)
        {
            ret1++;
        }

        if (i2 != i1 + i3 &&  i4 == i1 + i3)
        {
            ret2++;
        }
        
    }

    cout << ret2 << " " << ret1 << endl;
    
    return 0;
}
