// 主流解决方式2，将声明和实现写到一起，文件后缀名改为.hpp
#include "person.hpp"

void test1()
{
    Person<string, int> p1("Jerry", 12);

    p1.showPerson();
}

int main()
{
    test1();
}