#include <iostream>
#include <map>
#include <vector>

using namespace std;

typedef struct Node
{
    int data;
    string address;
    string next;
    bool isUsed;
} Node;

int main(int argc, char const *argv[])
{
    int count;
    string address;
    int k;

    cin >> address >> count >> k;

    map<string, Node> m;

    for (size_t i = 0; i < count; i++)
    {
        Node n;
        cin >> n.address >> n.data >> n.next;
        n.isUsed = false;
        m[n.address] = n;
    }

    //串链表
    vector<Node> v;
    while (address != "-1")
    {
        Node n;
        n = m[address];
        address = n.next;
        v.push_back(n);
    }

    //排序
    vector<Node> ans;
    int n = 0;

    //负数
    for (auto it = v.begin(); it != v.end(); it++)
    {
        if ((*it).data < 0 && !(*it).isUsed)
        {
            ans.push_back((*it));

            (*it).isUsed = true;

            if (n != 0)
            {
                ans[n - 1].next = ans[n].address;
            }

            n++;
        }
    }

    //[0,k]
    for (auto it = v.begin(); it != v.end(); it++)
    {
        if ((*it).data <= k && (*it).data >= 0 && !(*it).isUsed)
        {
            ans.push_back((*it));

            (*it).isUsed = true;

            if (n != 0)
            {
                ans[n - 1].next = ans[n].address;
            }

            n++;
        }
    }

    //>k
    for (auto it = v.begin(); it != v.end(); it++)
    {
        if ((*it).data > k && !(*it).isUsed)
        {
            ans.push_back((*it));

            (*it).isUsed = true;

            if (n != 0)
            {
                ans[n - 1].next = ans[n].address;
            }

            n++;
        }
    }

    //调整最后节点next
    ans[ans.size() - 1].next = "-1";

    for (size_t i = 0; i < ans.size(); i++)
    {
        printf("%s %i %s\n", ans[i].address.c_str(), ans[i].data, ans[i].next.c_str());
    }

    return 0;
}
