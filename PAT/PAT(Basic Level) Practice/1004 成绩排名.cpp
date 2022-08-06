#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct student
{
    string m_name;
    string m_id;
    int m_score;
}student;

bool cmp(const student &p1,const student &p2)//要用常数，不然编译错误 
{
	return p1.m_score < p2.m_score;
}

int main(int argc, char const *argv[])
{
    int count;
    cin >> count;

    vector<student> v;

    for (size_t i = 0; i < count; i++)
    {
        student s;
        
        cin >> s.m_name >> s.m_id >> s.m_score;
        
        v.push_back(s);
    }

    sort(v.begin() , v.end(), cmp);
    
    cout << v.back().m_name << " "<< v.back().m_id << endl; 

    cout << v.front().m_name << " "<< v.front().m_id << endl;

    return 0;
}

