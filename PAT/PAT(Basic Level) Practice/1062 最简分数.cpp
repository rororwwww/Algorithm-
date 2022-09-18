#include <iostream>
using namespace std;

int GCD(int a, int b){
    return b == 0 ? a : GCD(b, a % b);
}

int main(int argc, char const *argv[])
{
    int n1, m1, n2, m2, k;

    scanf("%d/%d %d/%d %d", &n1, &m1, &n2, &m2, &k);
    
    if (n1 * m2 > n2 * m1)
    {
        int n;
        
        n = n1;
        n1 = n2;
        n2 = n; 


        n = m1;
        m1 = m2;
        m2 = n;
    
    }
    bool first = true;

    for (size_t i = n1 * m2 * k + 1; i < n2 * m1 * k; i++)
    {
        if (i % (m1 * m2) == 0)
        {
            if (GCD(i / (m1 * m2), k) != 1)
            {
                continue;
            }

            if (!first)
            {
                cout << " ";
            }

            cout << i / (m1 * m2) << "/" << k;
            first = false;
        }
    }

    return 0;
}
