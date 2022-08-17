#include <iostream>
#include <stack>
using namespace std;

int main(int argc, char const *argv[])
{
    unsigned int a,b,c,d;
    cin >> a >> b >> d;

    stack<int> s;
    
    c = a + b;

    int i = c;

    if ( i == 0)
    {
        cout << i;
    }
    
    
    while ( i != 0 )
    {
        s.push(i % d);
        i = i / d;
    }

    while (! s.empty())
    {
        cout << s.top(); 
        s.pop();
    }
    

        

    

    return 0;
}
