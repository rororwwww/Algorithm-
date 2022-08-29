#include <iostream>
#include <algorithm>
using namespace std;

bool isInsertionSort(int *n, int *ret, int count)
{
    // 判断无序后到结尾的序列是否未移动过
    // 未移动 插入排序
    // 移动过 归并排序
    for (size_t i = 1; i < count; i++)
    {
        if (ret[i - 1] > ret[i])
        {
            for (size_t k = i; k < count; k++)
            {
                if (ret[k] != n[k])
                {
                    return false;
                }
            }
        }
    }
    return true;
}

int main(int argc, char const *argv[])
{
    int count;

    int n[100] = {0};
    int ret[100] = {0};

    cin >> count;

    for (size_t i = 0; i < count; i++)
    {
        cin >> n[i];
    }

    for (size_t i = 0; i < count; i++)
    {
        cin >> ret[i];
    }

    bool b = isInsertionSort(n, ret, count);

    // 1. 通过sort来模拟插入排序 和 归并排序
    if (b)
    {
        cout << "Insertion Sort" << endl;
        //进行一次插入排序
        for (size_t i = 1; i < count; i++)
        {
            if (ret[i] < ret[i - 1])
            {
                sort(ret, ret + i + 1);

                break;
            }
        }
    }
    else
    {
        cout << "Merge Sort" << endl;
        //进行一次归并排序
        int step = 1;
        //当算法为归并算法时，不能简单的通过中间序列的前x位来判有序来判断当前排序进行了几次迭代。比如：
        // n=8
        // 原始序列：1 2 3 8 4 3 1 2
        // 中间序列：1 2 3 8 3 4 1 2
        // 实际上上述例子只进行了一次归并排序，如果按照前四位有序来判断则会误认为进行了两次归并排序。修改该问题后通过测试点6。

        bool isEqual = false;
        while (!isEqual)
        {
            isEqual = true;
            for (int i = 0; i < count; i++)
            {
                if (n[i] != ret[i])
                    isEqual = false;
            }

            step = step * 2;

            if (!isEqual)
            {
                for (int k = 0; k < count / step; k++)
                    sort(n + k * step, n + (k + 1) * step); 

                // 不足一组的也要排序
                // 7
                // 3 1 2 8 7 5 9
                // 1 3 2 8 5 7 4
                sort(n + count / step * step, n + count);
            } else {
                for (int k = 0; k < count / step; k++)
                    sort(ret + k * step, ret + (k + 1) * step); 
                sort(ret + count / step * step, ret + count);
            }
            
        }
    }

    for (size_t i = 0; i < count; i++)
    {
        if (i != 0)
        {
            cout << " ";
        }

        cout << ret[i];
    }

    return 0;
}