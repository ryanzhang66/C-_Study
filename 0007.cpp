#include <iostream>
using namespace std;

//引用的本质在C++内部就是一个指针常量

//常量引用：修饰形参，防止误操作
void showval(const int &val)
{
    cout << val << endl;
}

void swap(int &a,int &b)  //引用传递
{
    int temp = a;
    a = b;
    b = temp;
}

//函数的调用可以作为左值
int &test()
{
    static int a_1 = 10;
    return a_1;
}

int main()
{
    int a = 10;
    int &b = a;

    cout << b << endl;

    b = 100;

    cout << a << endl;

    int c = 20;
    swap(a,c);
    cout << "a = " << a << endl;
    cout << "c = " << c << endl;

    int &ref = test();
    cout << "test = " << ref << endl;

    test() = 1000;

    cout << "test = " << ref << endl;

    showval(test());
    
}

