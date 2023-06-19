// #include "person.h"

// 解决方式1，包含cpp源文件
#include "person.cpp"

void test1()
{
    Person<string, int> p1("Lihua", 12);

    p1.showPerson();
}

int main()
{
    test1();
    return 0;
}