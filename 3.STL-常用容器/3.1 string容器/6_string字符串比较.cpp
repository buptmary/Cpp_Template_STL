#include <iostream>
#include <string>
using namespace std;

/*************************
 * 3.1.6 string字符串比较
 **************************/

/***************
 * 比较方式：
 *  = 返回 0
 *  > 返回 1
 *  < 返回 -1
 ******************/

/**
 * 总结：
 *      字符串对比主要是用于比较两个字符串是否相等，判断谁大谁小的意义并不是很大
 */

void test1()
{
    string str1 = "hello";
    string str2 = "aello";

    int ret = 0;
    ret = str1.compare(str2);

    if (ret == 0)
    {
        cout << "s1 等于 s2" << endl;
    }
    else if (ret > 0)
    {
        cout << "s1 大于 s2" << endl;
    }
    else
    {
        cout << "s1 小于 s2" << endl;
    }
}

int main()
{
    system("chcp 65001");
    test1();
    return 0;
}