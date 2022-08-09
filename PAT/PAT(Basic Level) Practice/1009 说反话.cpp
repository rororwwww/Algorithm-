#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(int argc, char const *argv[])
{

    stack<string> m_stack;
    string s;

    while (true)
    {

        char c;
        
        c = cin.get();
        
        if (c == '\n')
        {
            m_stack.push(s);
            break;
        }

        if ( c != ' ')
        {
            s += c;
            continue;
        }

        m_stack.push(s);
        s.clear();
    }


    int count = 0;

    while (!m_stack.empty())
    {

        if (count != 0)
        {
            cout << " ";
        }

        std::cout << m_stack.top();
        m_stack.pop();
        count = 1;
    }
    

    return 0;
}
