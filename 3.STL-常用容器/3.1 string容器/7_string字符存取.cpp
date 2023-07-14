#include <iostream>
#include <string>
using namespace std;

/************************
 * 3.1.7 string字符串存取
 *************************/

/*****
 * string中单个字符存取方式有两种
 * - char& operator[](int n);      //通过[]方式取字符
 * - char& at(int n);              //通过at方法获取字符
 */

/***
 * 总结：string字符串中单个字符存取有两种方式，利用 [ ] 或 at
 */

void test1()
{
    string str = "hello world";

    for (int i = 0; i < str.size(); i++)
    {
        cout << str[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < str.size(); i++)
    {
        cout << str.at(i) << " ";
    }
    cout << endl;
}

void test2()
{
    string str1 = "hello world";

    // 字符修改
    str1[0] = 'x';
    str1.at(1) = 'x';

    cout << str1 << endl;
}

int main()
{
    test1();

    test2();
    return 0;
}