//C++的核心编程

//内存分区模型
//代码区，全局区，栈区，堆区。

//全局区中存放全局变量，静态变量，常量。

// #include <iostream>
// using namespace std;
 
// int * func(int b) //形参数据也是分配在栈区
// {
//     b = 100;
//     int a = 10;
//     return &a;
// }

// int main()
// {
//     //栈区数据由编译器管理开辟和释放，不要返回局部变量地址
//     int *p = func();

//     cout << *p << endl; //不要返回
//     cout << *p << endl;
// }

#include <iostream>
using namespace std;

int *func()
{
    //new 在堆区开辟空间，返回的是该数据的指针地址
    //delete 释放空间
    int *p = new int(10);
    return p;
}

void test2()
{
    int *arr = new int[10];

    for(int i=0; i<10; i++)
    {
        arr[i] = i;
        cout << arr[i] << endl;
    }
    delete[] arr; //释放数组时要加 []
}

int main()
{
    int *p = func();

    cout << (int)*p << endl;
    test2();
}