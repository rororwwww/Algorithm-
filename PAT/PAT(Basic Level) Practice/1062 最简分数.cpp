#include <iostream>
using namespace std;

int gcd(int a, int b){
    return b == 0 ? a : gcd(b, a % b);
}

//求a,b,c的最小公倍数
int lcm(int a, int b, int c)
{
    int m1 = a / gcd(a, b) * b;
    int m2 = b / gcd(b, c) * c;
    return m1 / gcd(m1, m2) * m2;
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

    int l = lcm(m1,m2,k);

    for (size_t i = n1 * l / m1 + 1; i < n2 * l / m2; i++)
    {
        if (i % (l / k) == 0)
        {
            if (gcd(i / (l / k), k) != 1)
            {
                continue;
            }

            if (!first)
            {
                cout << " ";
            }

            cout << i / (l / k) << "/" << k;
            first = false;
        }
    }

    return 0;
}
