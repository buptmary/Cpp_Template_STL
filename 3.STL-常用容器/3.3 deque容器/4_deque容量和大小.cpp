#include <iostream>
#include <deque>
using namespace std;

/***********************
 * 3.3.4 deque容量和大小
 **********************/

/******************************************
 * 函数原型
 * deque.empty();                       //判断容器是否为空
 * deque.size();                        //返回容器中元素的个数
 * deque.resize(num);                   //重新指定容器的长度为num,若容器变长，则以默认值填充新位置。
 * ​			                         //如果容器变短，则末尾超出容器长度的元素被删除。
 * deque.resize(num, elem);             //重新指定容器的长度为num,若容器变长，则以elem值填充新位置。
 *                                      //如果容器变短，则末尾超出容器长度的元素被删除。
 **************************************/

/**************************
 * 总结
 * deque没有容量的概念
 * 判断是否为空   --- empty
 * 返回元素个数   --- size
 * 重新指定个数   --- resize
 **************************/

void printDeque(const deque<int> &d)
{
    for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

// deque没有容量概念
void test1()
{
    deque<int> deq1;
    for (int i = 0; i < 10; i++)
    {
        deq1.push_back(i);
    }
    printDeque(deq1);

    if (deq1.empty())
    {
        cout << "deq1为空!" << endl;
    }
    else
    {
        cout << "deq1不为空!" << endl;
        // 统计大小
        cout << "deq1的大小为: " << deq1.size() << endl;
    }

    // 重新指定大小
    deq1.resize(15, 1);
    printDeque(deq1);

    deq1.resize(5);
    printDeque(deq1);
}

int main()
{
    system("chcp 65001");
    test1();
    return 0;
}