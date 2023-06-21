#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/********************************
 * 2.5.2 vector存放自定义数据类型
 ******************************/

class Person
{
public:
    string m_Name;
    int m_Age;

public:
    Person(string name, int age)
    {
        this->m_Name = name;
        this->m_Age = age;
    }
};

void test1()
{
    vector<Person> v;
    Person p1("lihua", 10);
    Person p2("lihu2", 11);
    Person p3("lihu3", 13);

    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);

    for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << "Name: " << (*it).m_Name << endl
             << "Age: " << (*it).m_Age << endl;
    }
}

// 存放指针对象
void test2()
{
    vector<Person *> v;
    Person p1("lihua", 10);
    Person p2("lihu2", 11);
    Person p3("lihu3", 13);

    v.push_back(&p1);
    v.push_back(&p2);
    v.push_back(&p3);

    for (vector<Person *>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << "Name: " << (*it)->m_Name << endl
             << "Age: " << (*it)->m_Age << endl;
    }
}

int main()
{
    system("chcp 65001");

    test1();

    test2();

    return 0;
}