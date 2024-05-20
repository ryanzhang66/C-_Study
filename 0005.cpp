#include <iostream>
#include <string>
using namespace std;

int main()
{
    // 创建学生的结构体变量  
    struct student 
    {
        string name;
        int age;
    };
    // 创建结构体
    student s ;

    student s2[2] = {
        {"张三",0},
        {"里斯",22}
    };

    student *p = &s;  //结构体指针

    p->age = 19;
    p->name = "张冉";

    cout << "姓名： " << p->name << endl << "年龄： " << p->age << endl;
    cout << "姓名： " << s2[1].name << endl << "年龄： " << s2[1].age << endl;

    //嵌套结构体
    struct teacher {
        int id;
        int age;
        string name;
        struct student stu;
    };

    struct teacher t;

    struct teacher *pt;

    pt = &t;

    pt->id = 26001;
    pt->age = 26;
    pt->name = "立方";
    pt->stu.age = 18;
    pt->stu.name = "文件";

    cout << "老师工号：" << t.id << endl
         << "教师年龄：" << t.age << endl
         << "教师名字：" << t.name << endl
         << "学生名字：" << t.stu.name << endl
         << "学生年龄：" << t.stu.age << endl;

}