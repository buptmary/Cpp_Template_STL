#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

/*****************
 * 3.3.7 deque排序
 ******************/

/*******************************
 * 利用算法实现对deque容器进行排序
 * 函数原型：
 * sort(iterator beg, iterator end)  //对beg和end区间内元素进行排序
 *******************************/

void printDeque(const deque<int> &deq)
{
    for (deque<int>::const_iterator it = deq.begin(); it != deq.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void mySort(deque<int> &deq)
{
    int temp;
    bool is_sorted = true;

    for (int i = 0; i < deq.size() - 1; i++)
    {
        is_sorted = true;
        for (int j = 0; j < deq.size() - 1 - i; j++)
        {
            if (deq[j] > deq[j + 1])
            {
                temp = deq[j];
                deq[j] = deq[j + 1];
                deq[j + 1] = temp;
                is_sorted = false;
            }
        }
        if (is_sorted)
        {
            break;
        }
    }
}

void mySort2(deque<int> &deq)
{
    int temp;
    int min_Id;
    for (int i = 0; i < deq.size(); i++)
    {
        min_Id = i;
        for (int j = i + 1; j < deq.size(); j++)
        {
            if (deq[j] < deq[i])
            {
                min_Id = j;
            }
        }
        if (min_Id != i)
        {
            temp = deq[min_Id];
            deq[min_Id] = deq[i];
            deq[i] = temp;
        }
    }
}

void test1()
{
    deque<int> deq1;
    deq1.push_back(10);
    deq1.push_back(20);
    deq1.push_back(30);
    deq1.push_front(100);
    deq1.push_front(200);
    deq1.push_front(300);

    printDeque(deq1);

    // 利用sort算法进行排序
    // 支持随机访问的迭代器，都支持使用sort算法对其进行排序
    sort(deq1.begin(), deq1.end());
    // mySort(deq1);
    printDeque(deq1);
}

int main()
{
    test1();
    return 0;
}