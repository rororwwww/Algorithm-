#include <iostream>
#include <map>
using namespace std;

int main(int argc, char const *argv[])
{   
    map<int, int> m;

    int count;
    cin >> count;

    for (size_t i = 0; i < count; i++)
    {   
        int score;
        cin >> score;
        m[score]++;
    }

    cin >> count;
    for (size_t i = 0; i < count; i++)
    {   
        int score;
        cin >> score;
        
        if (i != 0)
        {
           cout << " ";
        }
        

        cout << m[score];
    }
    
    

    return 0;
}
