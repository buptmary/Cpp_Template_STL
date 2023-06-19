#pragma once
#include <iostream>
using namespace std;

template <typename T>
class MyArray
{
private:
    T *pAddress;    // 指向一个堆空间
    int m_Capacity; // 数组容量
    int m_Size;     // 数组大小

public:
    MyArray(int capacity)
    {
        this->m_Capacity = capacity;
        this->m_Size = 0;
        this->pAddress = new T[this->m_Capacity];
    }

    // 拷贝构造函数
    MyArray(const MyArray &arr)
    {
        this->m_Size = arr.m_Size;
        this->m_Capacity = arr.m_Capacity;
        this->pAddress = new T[arr.m_Capacity];

        for (int i = 0; i < arr.m_Size; i++)
        {
            this->pAddress[i] = arr.pAddress[i];
        }
    }

    // =运算符重载，防止浅拷贝问题
    MyArray &operator=(const MyArray &arr)
    {
        // 先判断原来堆区是否有数据，如果有先释放
        if (this->pAddress != nullptr)
        {
            delete[] this->pAddress;
            this->pAddress = nullptr;
            this->m_Size = 0;
            this->m_Capacity = 0;
        }

        // 深拷贝
        this->m_Size = arr.m_Size;
        this->m_Capacity = arr.m_Capacity;
        this->pAddress = new T[arr.m_Capacity];

        for (int i = 0; i < arr.m_Size; i++)
        {
            this->pAddress[i] = arr.pAddress[i];
        }

        // 引用类型函数返回自身即可
        return *this;
    }

    // 尾插法
    void Push_Back(const T &val)
    {
        // 判断容量是否等于大小
        if (this->m_Capacity == this->m_Size)
        {
            cout << "容量已满，无法插入数据" << endl;
            return;
        }

        this->pAddress[this->m_Size] = val;
        this->m_Size++; // 更新数组大小
    }

    // 尾删法
    void Pop_Back()
    {
        // 让用户访问不到最后一个元素
        if (this->m_Size == 0)
        {
            cout << "数组中没有元素" << endl;
            return;
        }

        this->m_Size--;
    }

    // 通过下标方式访问数组中的元素
    // 添加引用，使得函数可以作为左值存在 arr[0] = 10;
    T &operator[](int index)
    {
        return this->pAddress[index]; // 不考虑越界，用户自己去处理
    }

    // 获取数组容量
    int getCapacity()
    {
        return this->m_Capacity;
    }

    // 获取数组大小
    int getSize()
    {
        return this->m_Size;
    }

    ~MyArray()
    {
        if (this->pAddress != nullptr)
        {
            delete[] this->pAddress;
            this->pAddress = nullptr;
            this->m_Size = 0;
            this->m_Capacity = 0;
        }
    }
};