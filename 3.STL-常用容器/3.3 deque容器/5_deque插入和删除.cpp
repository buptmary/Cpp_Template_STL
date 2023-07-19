#include <iostream>
#include <deque>
using namespace std;

/*************************
 * 3.3.5 deque插入和删除
 ***********************/

/*************************************************************************
 * 函数原型
 * 两端插入操作：
 * - push_back(elem);         //在容器尾部添加一个数据
 * - push_front(elem);        //在容器头部插入一个数据
 * - pop_back();              //删除容器最后一个数据
 * - pop_front();             //删除容器第一个数据
 *
 * 指定位置操作：
 * - insert(pos,elem);        //在pos位置插入一个elem元素的拷贝，返回新数据的位置。
 * - insert(pos,n,elem);      //在pos位置插入n个elem数据，无返回值。
 * - insert(pos,beg,end);     //在pos位置插入[beg,end)区间的数据，无返回值。
 * - clear();                 //清空容器的所有数据
 * - erase(beg,end);          //删除[beg,end)区间的数据，返回下一个数据的位置。
 * - erase(pos);              //删除pos位置的数据，返回下一个数据的位置。
 *************************************************************************/

/**
 * 总结：
 * 插入和删除提供的位置是迭代器！
 * 尾插   ---  push_back
 * 尾删   ---  pop_back
 * 头插   ---  push_front
 * 头删   ---  pop_front
 */

void printDeque(const deque<int> &deq)
{
    for (deque<int>::const_iterator it = deq.begin(); it != deq.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

// 两端操作
void test1()
{
    deque<int> deq1;
    // 尾插
    deq1.push_back(10);
    deq1.push_back(20);
    // 头插
    deq1.push_front(100);
    deq1.push_front(200);

    printDeque(deq1);

    // 尾删
    deq1.pop_back();
    // 头删
    deq1.pop_front();

    printDeque(deq1);
}

// 指定位置操作
void test2()
{
    deque<int> deq1;
    deq1.push_back(30);
    deq1.push_back(40);
    deq1.push_front(20);
    deq1.push_front(10);
    printDeque(deq1);

    deq1.insert(deq1.begin(), 7);
    printDeque(deq1);

    deq1.insert(deq1.begin() + 1, 2, 6);
    printDeque(deq1);

    deque<int> deq2;
    deq2.push_back(1);
    deq2.push_back(2);
    deq2.push_back(3);

    deq1.insert(deq1.begin(), deq2.begin(), deq2.end());
    printDeque(deq1);
}

// 删除
void test3()
{
    deque<int> deq1;
    deq1.push_back(30);
    deq1.push_back(40);
    deq1.push_front(20);
    deq1.push_front(10);
    printDeque(deq1);

    deq1.erase(deq1.begin());
    printDeque(deq1);

    deq1.clear();
    printDeque(deq1);
}

int main()
{
    test1();
    test2();
    test3();
    return 0;
}