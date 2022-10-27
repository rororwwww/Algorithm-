#include <iostream>
#include <algorithm>

std::string cmp(float n, float m)
{
    if (n == m)
    {
        return "Ping";
    }

    if (n < m)
    {
        return "Gai";
    }

    return "Cong";
}

void func(float i, float yi, float bing, float m)
{
    std::cout << i << " ";
    std::cout << cmp(i, m) << " " << cmp(yi, m) << " " << cmp(bing, m);
}

int main(int argc, char const *argv[])
{
    int m, x, y;
    std::cin >> m >> x >> y;

    for (int i = 99; i > 9; i--)
    {
        std::string s = std::to_string(i);
        std::reverse(s.begin(), s.end());
        int yi = atoi(s.c_str());

        float bing = float(abs(i - yi)) / float(x);

        if (yi == bing * y)
        {
            func(i, yi, bing, m);
            return 0;
        }
    }

    std::cout << "No Solution" << std::endl;

    return 0;
}
