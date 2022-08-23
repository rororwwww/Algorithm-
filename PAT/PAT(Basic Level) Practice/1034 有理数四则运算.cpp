#include <iostream>
#include <string>
using namespace std;

typedef struct fraction
{
    long long int numerator;
    long long int denominator;
    long long int k;
}fraction;

void coutFraction(fraction ret1)
{

    long long int a,b,t;

    a = abs(ret1.numerator);
    b = abs(ret1.denominator);

    while(b!=0){
        t=a;
        a=b;
        b=t%b;
    }

    ret1.numerator /= a;
    ret1.denominator /= a;

    if (ret1.denominator < 0)
    {
        ret1.numerator = -ret1.numerator;
        ret1.denominator = -ret1.denominator;
    }
    

    if (ret1.numerator == 0 || ret1.denominator == 1)
    {
        if (ret1.k < 0)
        {
            cout << "(" << ret1.k << ")";
        } else { 
            cout << ret1.k;
        }
        
    } else {
        if (ret1.numerator < 0 || ret1.k < 0)
        {
            if (ret1.k != 0)
            {
                cout << "(" << ret1.k << " " << ret1.numerator << "/" << ret1.denominator << ")";
            } else {
                cout << "(" << ret1.numerator << "/" << ret1.denominator << ")";
            }
            
        } else { 

            if (ret1.k != 0)
            {
                cout << ret1.k << " " << ret1.numerator << "/" << ret1.denominator;
            } else {
                cout << ret1.numerator << "/" << ret1.denominator;
            }

        }
    }
}

fraction toFormat(fraction ret1)
{

    if (ret1.denominator < 0)
    {
        ret1.denominator = abs(ret1.denominator);
        ret1.numerator = -ret1.numerator;
    }

    if (ret1.k < 0)
    {
        ret1.numerator = abs(ret1.numerator);
    }

    return ret1;
    
}

fraction doFunc(fraction f1, fraction f2, bool isAdd)
{
    fraction ret;

    long long int a,b,t;

    long long int lcm;

    a = abs(f1.denominator);
    b = abs(f2.denominator);

    while(b!=0){
        t=a;
        a=b;
        b=t%b;
    }

    lcm = f1.denominator * f2.denominator / a;

    ret.denominator = lcm;

    if (isAdd)
    {
        ret.numerator = f1.numerator * lcm / f1.denominator + f2.numerator * lcm / f2.denominator;
    } else {
        ret.numerator =  f1.numerator * lcm / f1.denominator - f2.numerator * lcm / f2.denominator;
    }

    ret.k = ret.numerator / ret.denominator;

    ret.numerator = ret.numerator % ret.denominator;

    return ret;
}

int main(int argc, char const *argv[])
{
    string s1,s2;

    cin >> s1 >> s2;

    fraction f1;
    fraction f2;

    f1.denominator = atoi(s1.substr(s1.find('/') + 1, s1.size() - s1.find('/')).c_str());
    f1.numerator = atoi(s1.substr(0, s1.find('/')).c_str());

    f2.denominator = atoi(s2.substr(s2.find('/') + 1, s2.size() - s2.find('/')).c_str());
    f2.numerator = atoi(s2.substr(0, s2.find('/')).c_str());
    
    fraction ret1;
    ret1 = f1;
    ret1.k = ret1.numerator / ret1.denominator;
    ret1.numerator = ret1.numerator % ret1.denominator;
    
    
    fraction ret2;
    ret2 = f2;
    ret2.k = ret2.numerator / ret2.denominator;
    ret2.numerator = ret2.numerator - ret2.k * ret2.denominator;

    coutFraction(ret1);

    cout << " " << "+" << " ";

    coutFraction(ret2);

    cout << " " << "=" << " ";

    fraction f;

    f = doFunc(f1,f2,true);
    f = toFormat(f);

    coutFraction(f);

    cout << endl;

    coutFraction(ret1);

    cout << " " << "-" << " ";

    coutFraction(ret2);

    cout << " " << "=" << " ";

    f = doFunc(f1,f2,false);
    f = toFormat(f);

    coutFraction(f);

    cout << endl;

   
    coutFraction(ret1);

    cout << " " << "*" << " ";

    coutFraction(ret2);

    cout << " " << "=" << " ";

    if ( f2.numerator == 0)
    {
        cout << "0" << endl;
    } else {
        fraction f;

        f.numerator = f1.numerator * f2.numerator ;
        f.denominator = f1.denominator * f2.denominator;
        f.k = f.numerator / f.denominator;
        f.numerator = f.numerator % f.denominator;

        f = toFormat(f);

        coutFraction(f);
        cout << endl;
    }
   
    coutFraction(ret1);

    cout << " " << "/" << " ";

    coutFraction(ret2);

    cout << " " << "=" << " ";

    if ( f2.numerator == 0)
    {
        cout << "Inf" << endl;
    } else {
        fraction f;

        f.numerator = f1.numerator * f2.denominator ;
        f.denominator = f1.denominator * f2.numerator;
        f.k = f.numerator / f.denominator;
        f.numerator = f.numerator % f.denominator;

        f = toFormat(f);

        coutFraction(f);
        cout << endl;
    }


    return 0;
}
