#include <iostream>
#include <list>
using namespace std;

/**********************
 * 3.7.2 list赋值和交换
 **********************/

/**********************
 * 函数原型：
 * assign(beg, end);                        //将[beg, end)区间中的数据拷贝赋值给本身。
 * assign(n, elem);                         //将n个elem拷贝赋值给本身。
 * list& operator=(const list &lst);        //重载等号操作符
 * swap(lst);                               //将lst与本身的元素互换。
 *************************/

void printList(const list<int> &L)
{
    for (list<int>::const_iterator lit = L.begin(); lit != L.end(); lit++)
    {
        cout << *lit << " ";
    }
    cout << endl;
}

void test1()
{
    list<int> L1;
    L1.push_back(10);
    L1.push_back(20);
    L1.push_back(30);
    L1.push_back(40);
    printList(L1);

    // 赋值
    list<int> L2;
    L2 = L1;
    printList(L2);

    list<int> L3;
    L3.assign(L2.begin(), L2.end());
    printList(L3);

    list<int> L4;
    L4.assign(10, 123);
    printList(L4);
    // 重新赋值会覆盖原来的值
    L4.assign(12, 12);
    printList(L4);
}

// 交换
void test2()
{
    list<int> L1;
    L1.push_back(10);
    L1.push_back(20);
    L1.push_back(30);
    L1.push_back(40);

    list<int> L2;
    L2.assign(10, 123);

    cout << "before swap: " << endl;
    printList(L1);
    printList(L2);

    L1.swap(L2);
    cout << "after swap: " << endl;
    printList(L1);
    printList(L2);
}

int main()
{
    test1();
    test2();
    return 0;
}