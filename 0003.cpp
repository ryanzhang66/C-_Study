#include <iostream>
using namespace std;

int  main()
{
    int a = 10;
    
    cout << a <<endl; 
    cout << sizeof(a) << endl;

    float b;
    b = 10.2f; //加f表示这是一个单精度的
    //默认情况下，显示6位有效数值
    cout << "b = " << b << endl;

    //科学技术法
    float f2 = 3e2; //3 * 10^2
    float f3 = 3e-2; //3 * 10^(-2)

    string a_str = "hello world";
    cout << a_str << endl;

    //创建bool数据类型
    bool flag = true;
    cout << flag << sizeof(flag) << endl;

    //输入
    int bar ;
    cout << "请给bar赋值：" << endl;
    cin >> bar;

    //三目运算符
    //表达式1 ? 表达式2 : 表达式3; 1为真，返回表达式2的结果

    //do while
    int n = 0;

    do {
        cout << n << endl;
        n++;
    }
    while (n < 10);

    
}