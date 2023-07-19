#include <iostream>
#include <deque>
using namespace std;

/********************
 * 3.3.6 deque数据存取
 ********************/

/***********************
 * 函数原型：
 * at(int idx);      //返回索引idx所指的数据
 * operator[];       //返回索引idx所指的数据
 * front();          //返回容器中第一个数据元素
 * back();           //返回容器中最后一个数据元素
 ****************************/

/**************************************
 * 总结：
 * 除了用迭代器获取deque容器中元素，[ ]和at也可以
 * front返回容器第一个元素
 * back返回容器最后一个元素
 **************************************/

void printDeque(const deque<int> &deq)
{
    for (deque<int>::const_iterator it = deq.begin(); it != deq.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test1()
{
    deque<int> deq1;
    // 尾插
    deq1.push_back(10);
    deq1.push_back(20);
    // 头插
    deq1.push_front(100);
    deq1.push_front(200);

    // 通过[]方式访问元素
    for (int i = 0; i < deq1.size(); i++)
    {
        cout << deq1[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < deq1.size(); i++)
    {
        cout << deq1.at(i) << " ";
    }
    cout << endl;

    // 访问首尾元素
    cout << "front: " << deq1.front() << endl;
    cout << "back: " << deq1.back() << endl;
}

int main()
{
    test1();
    return 0;
}