#include <iostream>
#include <deque>
using namespace std;

/**************************
 * 3.3.3 deque容器赋值操作
 *************************/

/****************************************
 * 函数原型：
 * deque& operator=(const deque &deq);          //重载等号操作符
 * assign(beg, end);                            //将[beg, end)区间中的数据拷贝赋值给本身。
 * assign(n, elem);                             //将n个elem拷贝赋值给本身。
 *****************************************/

void printDeque(const deque<int> &d)
{
    for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test1()
{
    deque<int> deq1;
    for (int i = 0; i < 10; i++)
    {
        deq1.push_back(i);
    }
    printDeque(deq1);

    deque<int> deq2;
    deq2 = deq1;
    printDeque(deq2);

    deque<int> deq3;
    deq3.assign(deq1.begin(), deq1.end());
    printDeque(deq3);

    deque<int> deq4;
    deq4.assign(10, 100);
    printDeque(deq4);
}

int main()
{
    test1();
    return 0;
}