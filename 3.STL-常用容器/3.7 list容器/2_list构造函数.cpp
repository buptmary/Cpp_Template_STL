#include <iostream>
#include <list>
using namespace std;

/********************
 * 3.7.2 list构造函数
 ********************/

/****************************************
 * 链表的优点：
 * 1.动态大小：链表的大小可以在运行时更改。
 * 2.插入/删除效率：链表在已知节点的情况下可以快速地插入和删除元素。
 * 3.内存利用：链表不需要连续的内存空间，适合处理大量数据。
 * 4.数据类型灵活：链表的节点可以存储各种类型的数据。
 * 5.实现其他数据类型：链表可以用于实现列表，堆栈，队列等数据类型。
 *
 *
 * 链表的缺点：
 * 1.随机访问困难：链表不支持直接访问，查找特定元素较慢。
 * 2.内存开销大：每个节点需要额外的内存来存储指针。
 * 3.反向遍历困难：在单向链表中，反向遍历困难，双向链表会增加内存开销。
 * 4.操作复杂性：插入或删除节点时可能导致错误或内存泄漏。
 * 5.无内置索引：链表中的元素没有内置的索引，对于需要索引的操作较复杂。
 **************************************************/

/***************************
 * 函数原型：
 * list<T> lst;                      //list采用采用模板类实现,对象的默认构造形式：
 * list(beg,end);                    //构造函数将[beg, end)区间中的元素拷贝给本身。
 * list(n,elem);                     //构造函数将n个elem拷贝给本身。
 * list(const list &lst);            //拷贝构造函数。
 ***************************/

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

    list<int> L2(L1.begin(), L1.end());
    printList(L2);

    list<int> L3(L2);
    printList(L3);

    list<int> L4(10, 123);
    printList(L4);
}

int main()
{
    test1();
    return 0;
}