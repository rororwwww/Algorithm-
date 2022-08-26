#include <iostream>
#include <string>
#include <map>

using namespace std;

typedef struct Student
{
    string id;
    int i1;
    int i2;
}Student;

int main(int argc, char const *argv[])
{
    int count;
    cin >> count;

    map<int, Student> m;

    for (size_t i = 0; i < count; i++)
    {
        Student s;
        cin >> s.id >> s.i1 >> s.i2 ;
        
        m.insert(std::pair<int, Student>(s.i1, s));
    }

    cin >> count;
    for (size_t i = 0; i < count; i++)
    {
        int i1;
        cin >> i1;
        cout << m[i1].id << " " << m[i1].i2 << endl;
    }
    
    
    return 0;
}

