#include <iostream>
#include <string>
using namespace std;

const double PI = 3.14;

//设计一个圆类，求圆的周长
//class代表设计一个类

class Circle
{
    //访问权限：public 公共权限 protected 保护权限 private 私有权限
    //protect 类内可以访问，类外不可以访问
    //private 类内可以访问，类外不可以访问
public:
    //属性
    int m_r;
    //行为
    //获取元的周长
    double calculateZC()
    {
        return 2 * PI * m_r;
    }
};

class Student 
{
public:
    //类中的属性和行为 我们统一称为成员
    //属性
    string name;
    int id;

    //行为
    //先是姓名与学号
    void showName()
    {
        cout << "姓名：" << name << endl
            << "id: " << id << endl;
    }

    //给姓名赋值
    void SetName(string rename)
    {
        name = rename;
    }

    void SetId(int reid)
    {
        id = reid;
    }
};

int main()
{
    //通过圆类，创建一个具体的圆
    Circle cl; //实例化 通过一个类创建一个对象的时候
    //给圆的属性赋值
    cl.m_r  = 10;

    cout << "圆的周长" << cl.calculateZC() << endl;

}

