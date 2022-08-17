#include <iostream>
#include <array>

using namespace std;
int main(int argc, char const *argv[])
{
    array<int,10> a;

    for (size_t i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    

    for (size_t k = 1; k < 10; k++)
    {
        if (a[k] != 0)
        {

            cout << k;

            a[k] -= 1;
            break;
            
        }
    
    }
    

    for (size_t k = 0; k < 10; k++)
    {

         if (a[k] != 0)
        {
            for (size_t i = 0; i < a[k]; i++)
            {
                cout << k;
            }
            
        }
        
    }
    
    

    return 0;
}
