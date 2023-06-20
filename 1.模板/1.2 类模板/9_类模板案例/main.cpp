#include "myArray.hpp"
#include <string>

void printArr(MyArray<int> &arr)
{
    for (int i = 0; i < arr.getSize(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void test1()
{
    MyArray<int> arr1(5);

    for (int i = 0; i < 5; i++)
    {
        arr1.Push_Back(i);
    }

    printArr(arr1);
    cout << "arr1的容量为: " << arr1.getCapacity() << endl
         << "arr1的大小为: " << arr1.getSize() << endl;

    MyArray<int> arr2(arr1);
    printArr(arr2);
    arr2.Pop_Back();
    arr2.Pop_Back();
    printArr(arr2);
    cout << "arr2的容量为: " << arr2.getCapacity() << endl
         << "arr2的大小为: " << arr2.getSize() << endl;
}

// 测试自定义数据类型
class Person
{
public:
    string m_Name;
    int m_Age;

public:
    Person() {}
    Person(string name, int age)
    {
        this->m_Name = name;
        this->m_Age = age;
    }
};

void printPersonArray(MyArray<Person> &personArr)
{
    for (int i = 0; i < personArr.getSize(); i++)
    {
        cout << "Name: " << personArr[i].m_Name << endl
             << "Age: " << personArr[i].m_Age << endl;
    }
}

void test2()
{
    MyArray<Person> personArr(5);
    Person p1("孙悟空", 30);
    Person p2("韩信", 20);
    Person p3("妲己", 18);
    Person p4("王昭君", 15);
    Person p5("赵云", 24);

    // 插入数据
    personArr.Push_Back(p1);
    personArr.Push_Back(p2);
    personArr.Push_Back(p3);
    personArr.Push_Back(p4);
    personArr.Push_Back(p5);

    printPersonArray(personArr);

    cout << "pArr的容量为: " << personArr.getCapacity() << endl
         << "pArr的大小为: " << personArr.getSize() << endl;
}

int main()
{
    system("chcp 65001");

    test1();

    test2();

    return 0;
}