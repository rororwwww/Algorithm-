#include <iostream>
#include <cmath>
#include <map>

using namespace std;

typedef struct contestants 
{
    string id;
    bool isOver;
    int rank;
}contestants;


bool isPrime(int n)
{   
    for (size_t i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
        
    }

    return true;
}

int main(int argc, char const *argv[])
{
    map<string, contestants> m;

    int count;
    cin >> count;

    for (size_t i = 1; i < count + 1; i++)
    {
        contestants c;
        cin >> c.id;
        c.rank = i;
        c.isOver = false;
        m[c.id] = c;
    }
    
    cin >> count;

    for (size_t i = 0; i < count; i++)
    {

        string s;
        cin >> s;
        
        try
        {
            if (m.at(s).isOver == true)
            {
                cout << m[s].id << ": Checked" << endl;
                continue;
            }

            if (m.at(s).rank == 1)
            {
                cout << m[s].id << ": Mystery Award" << endl;
                m.at(s).isOver = true;
                continue;
            }

            if (isPrime(m.at(s).rank))
            {
                cout << m[s].id << ": Minion" << endl;
                m.at(s).isOver = true;
                continue;
            }

            cout << m[s].id << ": Chocolate" << endl;
            m.at(s).isOver = true;

        }
        catch(const std::exception& e)
        {
            cout << s << ": Are you kidding?" << endl;
        }
        
    }
    
    return 0;
}
