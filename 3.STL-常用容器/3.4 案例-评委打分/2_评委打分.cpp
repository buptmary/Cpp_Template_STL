#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <string>
using namespace std;

/******************
 * 3.4 评委打分
 *****************/

/****
 * 有5名选手：选手ABCDE，10个评委分别对每一名选手打分，去除最高分，去除评委中最低分，取平均分。
 */

class Person
{
public:
    Person(string name, int avg)
    {
        this->m_Name = name;
        this->m_avg = avg;
        this->m_Score.resize(10, 0);
    }

public:
    string m_Name;
    // 平均分
    float m_avg;
    deque<int> m_Score;
};

// 创建选手
void creatPerson(vector<Person> &v)
{
    string name_Seed = "ABCDE";
    int score = 0;
    for (int i = 0; i < 5; i++)
    {
        string name = "选手";
        name += name_Seed[i];
        Person p(name, score);

        // 将创建的Person对象放入vector容器中
        v.push_back(p);
    }
}

// 打分环节
void setScore(vector<Person> &v)
{
    for (vector<Person>::iterator vit = v.begin(); vit != v.end(); vit++)
    {
        int i = 1;
        cout << "正在为 " << vit->m_Name << " 打分" << endl;
        for (deque<int>::iterator dit = vit->m_Score.begin(); dit != vit->m_Score.end(); dit++)
        {
            *dit = rand() % 41 + 60;
            cout << i++ << " 号评委的打分 " << *dit << endl;
        }
    }
}

// 计算最后得分
void caclAvg(vector<Person> &v)
{
    for (vector<Person>::iterator vit = v.begin(); vit != v.end(); vit++)
    {
        int sum = 0;
        // 对评委打分进行排序
        sort(vit->m_Score.begin(), vit->m_Score.end());

        vit->m_Score.pop_back();  // 去掉最高分
        vit->m_Score.pop_front(); // 去掉最低分

        // 计算总分
        for (deque<int>::iterator dit = vit->m_Score.begin(); dit != vit->m_Score.end(); dit++)
        {
            sum += *dit;
        }

        vit->m_avg = static_cast<float>(sum) / vit->m_Score.size(); // 计算平均分
        cout << vit->m_Name << " 的平均分为：" << vit->m_avg << endl;
    }
}

int main()
{
    system("chcp 65001");
    // 随机数种子
    srand(static_cast<unsigned>(time(NULL)));

    vector<Person> v;
    creatPerson(v);
    setScore(v);
    caclAvg(v);

    return 0;
}