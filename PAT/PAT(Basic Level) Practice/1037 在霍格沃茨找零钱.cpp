#include <iostream>
using namespace std;

typedef struct money
{
    int Galleon;
    int Sickle;
    int Knut;
}money;


int main(int argc, char const *argv[])
{
    money m1;
    money m2;
    scanf("%d.%d.%d", &m1.Galleon, &m1.Sickle, &m1.Knut);
    scanf("%d.%d.%d", &m2.Galleon, &m2.Sickle, &m2.Knut);

    int ret = m2.Galleon * 17 * 29 + m2.Sickle * 29 + m2.Knut - (m1.Galleon * 17 * 29 + m1.Sickle * 29 + m1.Knut);

    if (ret >= 0)
    {
        cout << ret / (17 * 29) << "." << (ret / 29) % 17 << "."<< ret % 29 << endl;
    } else {
        ret = -ret;
        cout << "-" << ret / (17 * 29) << "." << (ret / 29) % 17 << "."<< ret % 29 << endl;
    }

    return 0;
}
