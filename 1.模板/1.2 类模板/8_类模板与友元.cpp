#include <iostream>
#include <string>
using namespace std;

/**********************
 * 1.2.8 类模板与友元
 *********************/

/**************************************************
 * 全局函数类内实现 - 直接在类内声明友元即可
 * 全局函数类外实现 - 需要提前让编译器知道全局函数的存在
 **************************************************/

// 2. 全局函数配合友元  类外实现 - 先做函数模板声明，下方在做函数模板定义，在做友元
template <class T1, class T2>
class Person;

template <class T1, class T2>
void printPerson2(Person<T1, T2> &p)
{
    cout << "类外实现 ---- 姓名： " << p.m_Name << endl
         << "年龄：" << p.m_Age << endl;
}

template <class T1, class T2>
class Person
{
private:
    T1 m_Name;
    T2 m_Age;

public:
    Person(T1 name, T2 age)
    {
        this->m_Name = name;
        this->m_Age = age;
    }

    // 1. 全局函数配合友元 类内实现
    friend void printPerson(Person<T1, T2> &p)
    {
        cout << "Name: " << p.m_Name << endl
             << "Age: " << p.m_Age << endl;
    }

    // 全局函数配合友元  类外实现
    // 加空模板参数列表
    friend void printPerson2<>(Person<T1, T2> &p);
};

// 1. 全局函数在类内实现
void test1()
{
    Person<string, int> p1("Tom", 20);
    printPerson(p1);
}

// 2. 全局函数在类外实现
void test2()
{
    Person<string, int> p1("Jerry", 30);
    printPerson2(p1);
}

int main()
{

    system("chcp 65001");
    // test1();

    test2();

    return 0;
}