#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int studentCount, questionCount;
    cin >> studentCount >> questionCount;

    vector<int> answer;
    vector<int> score;
    
    for (size_t i = 0; i < questionCount; i++)
    {
        int n;
        cin >> n;
        score.push_back(n);
    }
    
    for (size_t i = 0; i < questionCount; i++)
    {
        int n;
        cin >> n;
        answer.push_back(n);
    }

    for (size_t i = 0; i < studentCount; i++)
    {
        
        int ret = 0;

        for (size_t i = 0; i < questionCount; i++)
        {
            int n;
            cin >> n;

            if ( n == answer[i])
            {
                ret += score[i];
            }
            
        }

        cout << ret << endl;
        
    }
    

    return 0;
}
