#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

typedef struct node
{
    string address;
    string next;
    int data;
}node;

int main(int argc, char const *argv[])
{
    int count;
    int k;
    string address;

    cin >> address >> count >> k;

    map<string, node> m;
    
    for (size_t i = 0; i < count; i++)
    {
        node n;
        string address;
        cin >> address >> n.data >> n.next; 
        n.address = address;
        m[address] = n;
    }

    vector<node> v2;
    while (address != "-1")
    {
        v2.push_back(m[address]);
        address = m[address].next;
    }

    int n = v2.size();

    for (size_t i = 0; i < n - n % k; i = i + k)
    {
        reverse(v2.begin() + i,  v2.begin() + i + k);
    }
    

    for (size_t i = 0; i < n - 1; i++)
    {
        cout << v2.at(i).address << " " << v2.at(i).data << " " << v2.at(i + 1).address << endl;
    }

     cout << v2.at(n - 1).address << " " <<  v2.at(n - 1).data << " " <<  "-1" << endl;
    

    return 0;
}
