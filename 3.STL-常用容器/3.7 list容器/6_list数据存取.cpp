#include <iostream>
#include <list>
using namespace std;

/********************
 * 3.7.6 list数据存取
 ********************/

/**********************************
 * 函数原型
 * front();         // 返回第一个元素
 * back();          // 返回最后一个元素
 *************************************/

// 数据存取
void test1()
{
    list<int> L1;
    L1.push_back(10);
    L1.push_back(20);
    L1.push_back(30);
    L1.push_back(40);

    cout << "第一个元素为: " << L1.front() << endl;
    cout << "最后一个元素为: " << L1.back() << endl;

    // list容器的迭代器是双向迭代器，不支持随机访问
    list<int>::iterator it = L1.begin();
    // it = it + 1;//错误，不可以跳跃访问，即使是+1
}

int main()
{
    system("chcp 65001");
    test1();
    return 0;
}