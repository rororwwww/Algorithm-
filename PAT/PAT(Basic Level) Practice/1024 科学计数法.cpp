#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    cin >> s;

    size_t posE = s.find("E");

    bool isNegativeNum = false;

    int index;

    index = stoi(s.substr(posE + 1));

    s = s.substr(0, posE);

    if (s[0] == '-')
    {
       isNegativeNum = true;
    }

    //清除符号
    s.erase(0,1);
   

    //指数为正 后移小数点
    if ( index > 0 )
    {
       
       int len = s.length() - s.find(".") - 1;

       if (len > abs(index))
       {
            for (size_t i = 0; i < abs(index); i++)
            {
                char c;
                size_t pos = s.find(".");
                
                c = s[pos];
                s[pos] = s[pos + 1];
                s[pos + 1] = c;
            }
            
       }


       if (len < abs(index))
       {
            for (size_t i = 0; i < abs(index) - len; i++)
            {
                s.append("0");
            }
            
            s.erase(s.find("."), 1);

       }

       if (len == abs(index))
       {
            s.erase(s.find("."), 1);
       } 
        
    }

     //指数为负 前移小数点
    if ( index < 0 )
    {
       int len = s.find(".");

       if (len > abs(index))
       {
            for (size_t i = 0; i < abs(index); i++)
            {
                char c;
                size_t pos = s.find(".");
                
                c = s[pos];
                s[pos] = s[pos - 1];
                s[pos - 1] = c;
            }
            
       }


       if (len < abs(index))
       {

            for (size_t i = 0; i <= abs(index) - len; i++)
            {
                s.insert(0, "0");
            }

            s.erase(s.find("."), 1);

            s.insert(1, ".");

       }

       if (len == abs(index))
       {
            s.erase(s.find("."), 1);
       } 
    }

    
    //指数为零 base部分直接输出    

    if (isNegativeNum)
    {
        s.insert(0,"-");
    }

    cout << s;

    return 0;
}