#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v;
    
    int count;
    cin >> count;

    for (size_t i = 0; i < count; i++)
    {
        getchar();
        for (size_t i = 0; i < 4; i++)
        {
            
            char A;
            char T;
            scanf(" %c-%c", &A, &T);

            if (T == 'T')
            {
                v.push_back(A - 'A' + 1);
            }
            
        }
        
    }

    for (size_t i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }

    cout << endl;
    
    
    return 0;
}
