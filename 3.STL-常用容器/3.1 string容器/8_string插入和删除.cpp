#include <iostream>
#include <string>
using namespace std;

/***********************
 * 3.1.8 string插入和删除
 ***********************/

/**********************************************************************
 * string& insert(int pos, const char* s);             //插入字符串
 * string& insert(int pos, const string& str);         //插入字符串
 * string& insert(int pos, int n, char c);             //在指定位置插入n个字符c
 * string& erase(int pos, int n = npos);               //删除从Pos开始的n个字符
 * **************************************************************************/

void test1()
{
    string str = "hello world";
    str.insert(1, "xxx");
    cout << str << endl;

    str.erase(1, 3); // 从1号开始删除3个字符
    cout << str << endl;
}

int main()
{
    test1();
    return 0;
}