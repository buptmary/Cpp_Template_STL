#include <iostream>
using namespace std;

/*****************************
 * 1.2.2 类模板与函数模板的区别
 ****************************/

template <class NameType, class AgeType = int>
class Person
{
public:
    NameType m_Name;
    AgeType m_Age;

public:
    Person(NameType name, AgeType age)
    {
        this->m_Name = name;
        this->m_Age = age;
    }

    void showPerson()
    {
        cout << "name: " << this->m_Name << endl
             << "age: " << this->m_Age << endl;
    }
};

// 1、类模板没有自动类型推导的使用方式
void test1()
{
    Person<string, int> p1("lihua", 10);

    p1.showPerson();
}

// 2、类模板在模板参数列表中可以有默认参数
void test2()
{
    Person<string> p2("ming", 24);
    p2.showPerson();
}

int main()
{
    system("chcp 65001");

    test1();
    test2();

    return 0;
}