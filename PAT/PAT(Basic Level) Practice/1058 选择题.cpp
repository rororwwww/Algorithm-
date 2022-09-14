#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct Question
{
    string answer;
    int score;
} Question;

typedef struct Wrong
{
    int id;
    int count;
} Wrong;

bool compare(Wrong w1, Wrong w2)
{
    return w1.count > w2.count;
}

int main(int argc, char const *argv[])
{
    vector<Question> v;

    int QuestionCount, StudentCount;
    cin >> StudentCount >> QuestionCount;

    vector<Wrong> Wrong(QuestionCount);
    for (size_t i = 0; i < QuestionCount; i++)
    {
        Wrong[i].id = i;
        Wrong[i].count = 0;
    }

    vector<int> Student(StudentCount);

    for (size_t i = 0; i < QuestionCount; i++)
    {
        string s;
        Question q;

        int score;
        int num;
        int AnsNum;

        cin >> score >> num >> AnsNum;

        q.score = score;

        for (size_t i = 0; i < AnsNum; i++)
        {
            char c;
            cin >> c;
            s += c;
        }

        q.answer = s;

        v.push_back(q);
    }

    // for (size_t i = 0; i < QuestionCount; i++)
    // {
    //     cout << v[i].score << " " << v[i].answer << " ";
    // }
    // cout << endl;

    cin.get();

    for (size_t i = 0; i < StudentCount; i++)
    {
        string s;
        getline(cin, s);

        int k = 0;
        int sum = 0;

        while (s.find("(", k) != string::npos)
        {
            string ans;
            size_t pos = s.find("(", k);

            k = pos + 1;

            int n = s[++pos] - '0';

            while (n)
            {
                pos++;
                if (isalpha(s[pos]))
                {
                    n--;
                    ans += s[pos];
                }
            }

            // cout << ans << endl;

            if (ans == v[sum].answer)
            {
                Student[i] += v[sum].score;
            }
            else
            {
                Wrong[sum].count++;
            }

            sum++;
        }
    }

    int wrong = 0;
    int question;

    sort(Wrong.begin(), Wrong.end(), compare);

    for (size_t i = 0; i < StudentCount; i++)
    {
        cout << Student[i] << endl;
    }

    if (Wrong[0].count == 0)
    {
        cout << "Too simple" << endl;
    }
    else
    {
        cout << Wrong[0].count; 

        for (size_t i = 0; i < QuestionCount; i++)
        {
            if (Wrong[0].count == Wrong[i].count)
            {
                cout << " " << Wrong[i].id + 1;
            }
            
        }
        
    }

    return 0;
}
