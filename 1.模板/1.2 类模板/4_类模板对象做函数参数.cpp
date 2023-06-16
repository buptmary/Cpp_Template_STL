#include <iostream>
#include <string>
using namespace std;

/*******************************
 * 1.2.4 类模板对象做函数参数
 ******************************/

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
        cout << "Name: " << this->m_Name << endl
             << "Age: " << this->m_Age << endl;
    }
};

// 1. 指定传入的类型
void printPerson1(Person<string, int> &p)
{
    p.showPerson();
}

void test1()
{
    Person<string, int> p1("lihua", 15);

    printPerson1(p1);
}

// 2. 参数模板化
template <class T1, class T2>
void printPerson2(Person<T1, T2> &p)
{
    p.showPerson();

    cout << "T1的类型为: " << typeid(T1).name() << endl;
    cout << "T2的类型为: " << typeid(T2).name() << endl;
}

void test2()
{
    Person<string, int> p1("zhangqiang", 16);
    printPerson2(p1);
}

// 3. 整个类模板化
template <class T>
void printPerson3(T &p)
{
    cout << "T的类型为: " << typeid(T).name() << endl;
    p.showPerson();
}

void test3()
{
    Person<string, int> p1("hmm", 13);
    printPerson3(p1);
}

int main()
{
    system("chcp 65001");

    test1();

    test2();

    test3();

    return 0;
}