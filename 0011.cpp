// 成员属性设置为私有

#include <iostream>
#include <string>

using namespace std;

class persion
{
    //class的默认权限是私有的
    string M_name; //设置可读可写
    int M_id; //设置可写 为了验证可写我又加了一个可读
    string M_idol = "文件"; //设置可读

public: 
    void SetName(string name){
        M_name = name;
    }

    string Getname(){
        return M_name;
    }

    void SetId(int id){
        M_id = id;
    }

    int GetId(){
        return M_id;
    }

    string GetIdol(){
        return M_idol;
    }
};

int main()
{
    persion per;
    per.SetName("张冉");
    cout << "姓名：" << per.Getname() << endl;

    per.SetId(542213);
    cout << "ID：" << per.GetId() << endl;
    cout << "IDOL: " << per.GetIdol() << endl;
}