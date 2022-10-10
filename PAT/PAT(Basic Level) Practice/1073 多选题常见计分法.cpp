#include <iostream>
#include <string>
#include <vector>

using namespace std;

typedef struct Task
{
    int score;
    string answer;
}Task;


int main(int argc, char const *argv[])
{
    int n,m;
    cin >> n >> m;

    vector<Task> v;

    for (size_t i = 0; i < m; i++)
    {
        Task t;

        int score;
        cin >> score;
        
        t.score = score;

        int count, anscount;
        cin >> count >> anscount;

        string s;

        for (size_t i = 0; i < anscount; i++)
        {
            char c;
            cin >> c;
            s += c;
        }

        t.answer = s;

        v.push_back(t);
        
    }
    
    for (size_t i = 0; i < n; i++)
    {

        for (size_t i = 0; i < m; i++)
        {
            getchar();
            
            int count;
            scanf("(%d", &count);

            string ans;

            for (size_t i = 0; i < count; i++)
            {
                char c;
                scanf(" %c)", &c);
                ans += c;
            }

        } 

    }
    

    return 0;
}
