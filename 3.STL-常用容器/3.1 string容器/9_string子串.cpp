#include <iostream>
#include <string>
using namespace std;

/*********************
 * 3.1.9 string子串
 ********************/

void test1()
{
    string str = "abcdefg";
    string subStr = str.substr(1, 3); // 返回由pos开始的n个字符组成的字符串
    cout << "subStr = " << subStr << endl;

    string email = "hello@sina.com";
    int pos = email.find('@');
    string username = email.substr(0, pos);
    cout << "username: " << username << endl;
}

int main()
{
    test1();
    return 0;
}