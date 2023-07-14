#include <iostream>
#include <vector>
using namespace std;

/***********************
 * 3.2.2 vector构造函数
 ***********************/

/*********************************************************************************
 * 函数原型：
 * vector<T> v;                       //采用模板实现类实现，默认构造函数
 * vector(v.begin(), v.end());          //将v[begin(), end())区间中的元素拷贝给本身。
 * vector(n, elem);                     //构造函数将n个elem拷贝给本身。
 * vector(const vector &vec);           //拷贝构造函数。
 ********************************************************************************/

void printVector(vector<int> &v) // 引用方式传递参数，避免不必要的值拷贝
{
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test1()
{
    vector<int> v1; // 无参构造
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }
    printVector(v1);
}

int main()
{
    test1();
    return 0;
}