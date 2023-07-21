#include <iostream>
#include <list>
using namespace std;

/**********************
 * 3.7.7 list反转和排序
 **********************/

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
    L1.push_back(90);
    L1.push_back(30);
    L1.push_back(20);
    L1.push_back(70);
    printList(L1);

    // 反转容器元素
    L1.reverse();
    printList(L1);

    // 排序
    L1.sort(); // 默认排序规则，从小到大
    printList(L1);

    L1.sort([](int a, int b)
            { return a > b; }); // 指定规则，从大到小
    printList(L1);
}

int main()
{
    test1();
    return 0;
}