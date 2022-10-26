#include <iostream>
#include <set>

int main(int argc, char const *argv[])
{
    std::set<int> s;

    int n;
    std::cin >> n;

    for (size_t i = 1; i <= n; i++)
    {
        s.insert(i/2 + i/3 + i/5);   
    }

    std::cout << s.size() << std::endl;
    
    
    return 0;
}
