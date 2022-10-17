#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <cmath>
#include <algorithm>

struct student
{
    std::string id;
    int Gp = -1;
    int Gmid_term = -1;
    int Gfinal_term = -1;
    int G = -1;
};

bool cmp(student s1, student s2)
{
    if (s1.G != s2.G)
    {
        return s1.G > s2.G;
    }

    return s1.id < s2.id;
}

int main(int argc, char const *argv[])
{
    int p, mid, final;
    std::cin >> p >> mid >> final;

    std::map<std::string, student> m;

    for (size_t i = 0; i < p; i++)
    {
        std::string id;
        int p;
        std::cin >> id >> p;

        m[id].id = id;
        m[id].Gp = p;
    }

    for (size_t i = 0; i < mid; i++)
    {
        std::string id;
        int p;
        std::cin >> id >> p;

        m[id].id = id;
        m[id].Gmid_term = p;
    }

    for (size_t i = 0; i < final; i++)
    {
        std::string id;
        int p;
        std::cin >> id >> p;

        m[id].id = id;
        m[id].Gfinal_term = p;
    }

    std::vector<student> v;

    for (auto it = m.begin(); it != m.end(); it++)
    {
        if ((*it).second.Gfinal_term == -1)
        {
            continue;
        }

        if ((*it).second.Gp >= 200)
        {
            if ((*it).second.Gmid_term > (*it).second.Gfinal_term)
            {
                (*it).second.G = round((*it).second.Gmid_term * 0.4 + (*it).second.Gfinal_term * 0.6);
            }
            else
            {
                (*it).second.G = (*it).second.Gfinal_term;
            }

            if ((*it).second.G >= 60)
            {
                v.push_back((*it).second);
            }
        }
    }

    std::sort(v.begin(), v.end(), cmp);

    for (size_t i = 0; i < v.size(); i++)
    {
        std::cout << v[i].id << " " << v[i].Gp << " " << v[i].Gmid_term << " " << v[i].Gfinal_term << " " << v[i].G << std::endl;
    }

    return 0;
}
