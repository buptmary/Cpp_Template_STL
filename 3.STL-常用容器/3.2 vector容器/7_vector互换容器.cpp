#include <iostream>
#include <vector>
using namespace std;

/************************
 * 3.2.7 vector互换容器
 ************************/

/************************************************
 * 总结：
 * swap可以使两个容器互换，可以达到实用的收缩内存效果
 ************************************************/

void printVector(vector<int> &v)
{

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test1()
{
    vector<int> v1;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }
    printVector(v1);

    vector<int> v2;
    for (int i = 10; i > 0; i--)
    {
        v2.push_back(i);
    }
    printVector(v2);

    // 互换容器
    cout << "互换后" << endl;
    v1.swap(v2);
    printVector(v1);
    printVector(v2);
}

// 实际用途
// 巧用swap可以收缩内存空间
void test2()
{
    vector<int> v1;
    for (int i = 0; i < 100000; i++)
    {
        v1.push_back(i);
    }

    cout << "v的容量为: " << v1.capacity() << endl;
    cout << "v的大小为: " << v1.size() << endl;

    v1.resize(3);
    cout << "v的容量为: " << v1.capacity() << endl;
    cout << "v的大小为: " << v1.size() << endl;

    // 收缩内存
    vector<int>(v1).swap(v1); // vector<int>(v1) 拷贝构造函数初始化匿名对象
    cout << "v的容量为: " << v1.capacity() << endl;
    cout << "v的大小为: " << v1.size() << endl;
}

int main()
{
    system("chcp 65001");
    test1();
    test2();
    return 0;
}