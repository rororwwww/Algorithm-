#include <iostream>
#include <vector>
using namespace std;

int i;

int i23[2][3];
//甲乙
//BCJ

char c[3] = {'B','C','J'};

void func(char c1, char c2)
{
    if (c1 == c2)
    {
        i++;
    }

    if ((c1 == 'B') && (c2 == 'C'))
    {
        i23[0][0]++;
    }

    if ((c1 == 'B') && (c2 == 'J'))
    {
        i23[1][2]++;
    }

    if ((c1 == 'C') && (c2 == 'B'))
    {
        i23[1][0]++;
    }

    if ((c1 == 'C') && (c2 == 'J'))
    {
        i23[0][1]++;
    }

    if ((c1 == 'J') && (c2 == 'B'))
    {
        i23[0][2]++;
    }

    if ((c1 == 'J') && (c2 == 'C'))
    {
        i23[1][1]++;
    }
}

int main(int argc, char const *argv[])
{

    int count;

    cin >> count;

    for (size_t i = 0; i < count; i++)
    {
        char c1, c2;
        cin >> c1 >> c2;
        func(c1, c2);
    }

    cout << i23[0][0] + i23[0][1] + i23[0][2] << " " << i << " " << i23[1][0] + i23[1][1] + i23[1][2] << endl;
    cout << i23[1][0] + i23[1][1] + i23[1][2] << " " << i << " " << i23[0][0] + i23[0][1] + i23[0][2] << endl;

    for (size_t i = 0; i < 2; i++)
    {
        int ret = 0;
        int count = i23[i][0];

        if ( i23[i][1] > count)
        {
            ret = 1;
            count = i23[i][1];
        }

        if ( i23[i][2] > count)
        {
            ret = 2;
            count = i23[i][2];
        }
        
        cout << c[ret];

        if (i == 0)
        {
            cout << " ";
        }
        
    }
    

    return 0;
}
