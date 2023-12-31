#include <iostream>
#include <string>
using namespace std;

/*****************************
 * 3.1.5 string字符串查找和替换
 *****************************/

/**
 * int find(const string& str, int pos = 0) const;             //查找str第一次出现位置,从pos开始查找
 * int find(const char* s, int pos = 0) const;                 //查找s第一次出现位置,从pos开始查找
 * int find(const char* s, int pos, int n) const;              //从pos位置查找s的前n个字符第一次位置
 * int find(const char c, int pos = 0) const;                  //查找字符c第一次出现位置
 * int rfind(const string& str, int pos = npos) const;         //查找str最后一次位置,从pos开始查找
 * int rfind(const char* s, int pos = npos) const;             //查找s最后一次出现位置,从pos开始查找
 * int rfind(const char* s, int pos, int n) const;             //从pos查找s的前n个字符最后一次位置
 * int rfind(const char c, int pos = 0) const;                 //查找字符c最后一次出现位置
 * string& replace(int pos, int n, const string& str);         //替换从pos开始n个字符为字符串str
 * string& replace(int pos, int n,const char* s);              //替换从pos开始的n个字符为字符串s
 */

/*********
 * 总结：
 * find查找是从左往后，rfind从右往左
 * find找到字符串后返回查找的第一个字符位置，找不到返回-1
 * replace在替换时，要指定从哪个位置起，多少个字符，替换成什么样的字符串
 */

// 查找
void test1()
{
    string str1 = "abcdefgabcdefg";

    int pos = str1.find("de"); //  查找str第一次出现位置,从pos开始查找
    cout << "pos = " << pos << endl;

    pos = str1.rfind("de"); // 从右向左查找
    cout << "pos = " << pos << endl;
}

//  替换
void test2()
{
    string str1 = "abcdefgde";
    str1.replace(1, 3, "1111"); // 替换从pos开始n个字符为字符串st
    cout << "str1 = " << str1 << endl;
}

int main()
{
    system("chcp 65001");
    test1();
    test2();
}