#include <iostream>
using namespace std;

/************************
 * 3.1.4 string字符串拼接
 *************************/

/***
 * string& operator+=(const char* str);              //重载+=操作符
 * string& operator+=(const char c);                 //重载+=操作符
 * string& operator+=(const string& str);            //重载+=操作符
 * string& append(const char *s);                    //把字符串s连接到当前字符串结尾
 * string& append(const char *s, int n);             //把字符串s的前n个字符连接到当前字符串结尾
 * string& append(const string &s);                  //同operator+=(const string& str)
 * string& append(const string &s, int pos, int n);`//字符串s中从pos开始的n个字符连接到字符串结尾
 */

void test1()
{
    string str1 = "I";
    str1 += " love ";
    cout << "str1 = " << str1 << endl;

    str1 += ':';
    cout << "str1 = " << str1 << endl;

    string str2 = " LOL DNF";
    str1 += str2;
    cout << "str1 = " << str1 << endl;

    string str3 = "I";
    str3.append(" love ");
    str3.append("game abcde", 4);
    str3.append(str2, 4, 3); // 从下标4位置开始 ，截取3个字符，拼接到字符串末尾
    cout << "str3 = " << str3 << endl;
}

int main()
{
    test1();
    return 0;
}