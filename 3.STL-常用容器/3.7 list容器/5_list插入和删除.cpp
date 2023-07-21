#include <iostream>
#include <list>
using namespace std;

/***********************
 * 3.7.5 list插入和删除
 **********************/

/****************
 * 函数原型：
 * push_back(ele);                                      // 在容器尾部插入元素ele
 * pop_back();                                          // 删除容器最后一个元素
 * push_front(elem);                                    // 在容器头部插入一个数据
 * pop_front();                                         // 删除容器第一个元素
 * insert(const_iterator pos, ele);                     // 迭代器指向位置pos插入元素ele
 * insert(const_iterator pos, int n, ele);              // 迭代器指向位置pos插入n个元素ele
 * erase(const_iterator pos);                           // 删除迭代器指向的元素，返回下一个数据位置
 * erase(const_iterator start, const_iterator end);     // 删除迭代器从start到end之间的元素，返回下一个数据位置
 * remove(elem);                                        // 删除容器中所有与elem值匹配的元素
 * clear();                                             // 删除容器中所有元素
 */

void printList(const list<int> &L)
{

    for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test1()
{
    list<int> L1;

    // 尾插
    L1.push_back(10);
    L1.push_back(20);
    L1.push_back(30);
    // 头插
    L1.push_front(11);
    L1.push_front(22);
    L1.push_front(33);

    printList(L1);

    // 尾删
    L1.pop_back();
    printList(L1);
    // 头删
    L1.pop_front();
    printList(L1);

    // 插入
    // list迭代器只能线性访问，不能随机访问，因此不支持it+1操作
    list<int>::iterator it = L1.begin();
    L1.insert(it, 99);
    printList(L1);

    // 删除
    L1.erase(++it);
    printList(L1);

    // 移除
    L1.push_back(10000);
    L1.push_back(10000);
    L1.push_back(10000);
    printList(L1);
    L1.remove(10000);
    printList(L1);

    // 清空
    L1.clear();
    printList(L1);
}

int main()
{
    test1();
    return 0;
}