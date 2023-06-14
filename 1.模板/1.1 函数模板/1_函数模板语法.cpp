#include <iostream>
using namespace std;

/*****************
 * 1.1.1 函数模板
 *****************/

// 整型变量交换函数
void swapInt(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// 浮点型变量交换函数
void swapDouble(double &a, double &b)
{
    double temp = a;
    a = b;
    b = a;
}

// 利用模板提供通用交换函数
template <typename T>
void mySwap(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

// 使用传统函数实现
void test1()
{
    int a = 10;
    int b = 20;

    swapInt(a, b);

    cout << a << endl;
    cout << b << endl;
}

// 使用模板函数实现
void test2()
{
    int a = 111;
    int b = 222;

    // 1. 自动类型推导
    mySwap(a, b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // 2.显式指定类型
    mySwap<int>(a, b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    char c1 = 'a';
    char c2 = 'b';

    mySwap(c1, c2);
    cout << "c1 = " << c1 << endl;
    cout << "c2 = " << c2 << endl;
}

int main()
{
    system("chcp 65001");

    test2();
    return 0;
}