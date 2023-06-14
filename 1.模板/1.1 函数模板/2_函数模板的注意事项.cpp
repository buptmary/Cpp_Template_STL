#include <iostream>
using namespace std;

/***************************
 * 1.1.2 函数模板的注意事项
 ***************************/

/*****************************************************
 * 1. 自动类型推导，必须推导出一致的数据类型T,才可以使用
 * 2. 模板必须要确定出T的数据类型，才可以使用
 ******************************************************/

// 利用模板提供的通用交换函数
template <typename T> // typename 可以替换为 class
void mySwap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

// 1. 自动类型推导，必须推导出一致的数据类型T，才可以使用
void test1()
{
    int a = 111;
    int b = 222;

    char c = 'c';

    mySwap(a, b); // 正确，可以推导出一致的T

    // mySwap(a, c);   // 错误，推导不出一致的T类型

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

// 2. 模板必须要确定出T的数据类型，才可以使用
template <class T> // 运行时，T必须有明确的类型
void func()
{
    cout << "func 调用" << endl;
}

void test2()
{
    // func();      // 错误，模板不能独立使用，必须确定出T的类型
    func<int>(); // 利用显示指定类型的方式，给T一个类型，才可以使用该模板
}

int main()
{
    system("chcp 65001 ");

    test1();

    test2();

    return 0;
}