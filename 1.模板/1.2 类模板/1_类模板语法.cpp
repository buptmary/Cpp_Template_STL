#include <iostream>
#include <string>
using namespace std;

/*****************
 * 1.2.1 类模板语法
 *****************/

template <class NameType, class AgeType>
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
        cout << "name: " << this->m_Name << endl;
        cout << "age: " << this->m_Age << endl;
    }
};

void test1()
{

    Person<string, int> p1("jkl", 18); // c++11 之后的版本支持类模板自动推导
    p1.showPerson();
}

int main()
{
    system("chcp 65001");

    test1();

    return 0;
}