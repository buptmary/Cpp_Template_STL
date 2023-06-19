#include "myArray.hpp"

void printArr(MyArray<int> &arr)
{
    for (int i = 0; i < arr.getSize(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void test1()
{
    MyArray<int> arr1(5);

    for (int i = 0; i < 5; i++)
    {
        arr1.Push_Back(i);
    }

    printArr(arr1);
    cout << "arr1的容量为: " << arr1.getCapacity() << endl
         << "arr1的大小为: " << arr1.getSize() << endl;

    MyArray<int> arr2(arr1);
    printArr(arr2);
    arr2.Pop_Back();
    arr2.Pop_Back();
    printArr(arr2);
    cout << "arr2的容量为: " << arr2.getCapacity() << endl
         << "arr2的大小为: " << arr2.getSize() << endl;
}

int main()
{
    system("chcp 65001");

    test1();
    return 0;
}