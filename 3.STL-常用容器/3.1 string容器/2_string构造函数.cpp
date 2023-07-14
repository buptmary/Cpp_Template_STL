#include <iostream>
#include <string>
using namespace std;

/***********************
 * 3.1.2 string构造函数
 ************************/

/**
 string();        			    //创建一个空的字符串 例如: string str;
 string(const char* s);	       //使用字符串s初始化
 string(const string& str);    //使用一个string对象初始化另一个string对象
 string(int n, char c);        //使用n个字符c初始化
*/

void test1()
{
    string s1; // 创建空字符串，调用无参构造函数
    cout << "str1 = " << s1 << endl;

    const char *str = "hello world";
    string s2(str); // 有参构造函数，将c_string转化为string
    cout << "str2 = " << s2 << endl;

    string s3(s2); // 拷贝构造函数
    cout << "str3 = " << s3 << endl;

    string s4(10, 'a'); // 使用n个字符c初始化
    cout << "str4 = " << s4 << endl;
}

int main()
{
    test1();
    return 0;
}