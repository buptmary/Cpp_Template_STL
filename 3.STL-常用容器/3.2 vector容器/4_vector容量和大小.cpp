#include <iostream>
#include <vector>
using namespace std;

/************************
 * 3.2.4 vector容量和大小
 *************************/

/*****************************************
 * 函数原型
 * empty();                     //判断容器是否为空
 * capacity();                  //容器的容量
 * size();                      //返回容器中元素的个数
 * resize(int num);             //重新指定容器的长度为num，若容器变长，则以默认值填充新位置。
 * ​					         //如果容器变短，则末尾超出容器长度的元素被删除。
 *
 * resize(int num, elem);       //重新指定容器的长度为num，若容器变长，则以elem值填充新位置。
 * ​				             //如果容器变短，则末尾超出容器长度的元素被删除
 *******************************************/

void printVector(vector<int> &v)
{

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test1()
{
    vector<int> v1;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }
    printVector(v1);

    if (v1.empty())
    {
        cout << "v1 is empty!" << endl;
    }
    else
    {
        cout << "v1 isn't empty!" << endl;
        cout << "v1 的容量" << v1.capacity() << endl;
        cout << "v1 的大小" << v1.size() << endl;
    }

    // resize 重新指定大小，若指定的更大，默认用0填充新位置，可以利用重载版本替换默认填充
    v1.resize(15, 0);
    printVector(v1);

    // resize  重新指定大小，若指定的更小，超出部分元素被删除
    v1.resize(5);
    printVector(v1);
}

int main()
{
    system("chcp 65001");
    test1();
    return 0;
}