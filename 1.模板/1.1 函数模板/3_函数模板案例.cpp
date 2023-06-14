#include <iostream>
using namespace std;

/**********************
 * 1.1.3 函数模板案例
 **********************/

/***********************************************************************
 * 案例描述：
 *    1. 利用函数模板封装一个排序的函数，可以对**不同数据类型数组**进行排序
 *    2. 排序规则从大到小，排序算法为**选择排序**
 *    3. 分别利用**char数组**和**int数组**进行测试
 *
 ***************************************************************************/

// 交换函数模板
template <typename T>
void mySwap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <typename T> // 也可以替换为 class T
void mySort(T arr[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        int index = i; // index记录最大值或最小值
        for (int j = i + 1; j < len; j++)
        {
            if (arr[i] > arr[j])
            {
                index = j;
            }
        }
        if (index != i) // 如果最小数下标不是i，交换两者
        {
            mySwap(arr[i], arr[index]);
        }
    }
}

template <typename _T>
void mySort2(_T arr[], int len)
{
    bool is_sorted = true;

    for (int i = 0; i < len - 1; i++)
    {
        is_sorted = true;
        for (int j = 0; j < len - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                is_sorted = false;
                mySwap(arr[j], arr[j + 1]);
            }
        }

        if (is_sorted)
        {
            // 若某一轮数组已经有序，则不需要进行下一轮比较
            break;
        }
    }
}

template <typename T>
void printArr(T arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// 使用char数组进行测试
void test1()
{
    char charArr[] = "abcdefg";

    int num = sizeof(charArr) / sizeof(char) - 1;

    cout << num << endl;

    printArr<char>(charArr, num);

    // mySort<char>(charArr, num);
    mySort2(charArr, num);

    printArr(charArr, num);
}

// 使用int数组进行测试
void test2()
{
    int intArr[] = {7, 6, 5, 1, 2, 3, 4};

    int num = sizeof(intArr) / sizeof(int);

    printArr(intArr, num);
    mySort(intArr, num);

    printArr(intArr, num);
}

int main()
{

    system("chcp 65001");

    test1();

    test2();
    return 0;
}