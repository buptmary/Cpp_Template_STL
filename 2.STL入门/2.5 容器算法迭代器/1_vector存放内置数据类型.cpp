#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

/********************************
 * 2.5.1 vector存放内置数据类型
 ******************************/

void myPrint(int val)
{
    cout << val << endl;
}

// 容器存放内置数据类型
void test1()
{
    // 创建一个vector容器，数组
    vector<int> v;

    // 向容器中插入数据
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    // 通过迭代器访问容器中的数据
    vector<int>::iterator itBegin = v.begin(); // 起始迭代器，指向容器第一个元素
    vector<int>::iterator itEnd = v.end();     // 指向容器元素的最后一个元素的下一个位置

    // 第一种遍历方式 while循环
    while (itBegin != itEnd)
    {
        cout << *itBegin << endl;
        itBegin++;
    }

    // 第二中遍历方式 for循环
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << endl;
    }

    // 第三种遍历方式
    // STL 标准遍历算法，需要加头文件 <algorithm>
    for_each(v.begin(), v.end(), myPrint);
}

int main()
{
    system("chcp 65001");

    test1();

    return 0;
}