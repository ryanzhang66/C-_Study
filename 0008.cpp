#include <iostream>
using namespace std;

//这是函数的重载，可以提高函数的复用性

void func()
{
    cout << "没有" << endl;
}

// void func(int a)
// {
//     cout << "int a" << endl;
// }

void func(double a)
{
    cout << "double a" << endl;
}

void func(int a, int b)
{
    cout << "a b" << endl;
}

void func(int &a)
{
    cout << "int &a " << endl;
}

void func(const int &a)
{
    cout << "count int &a " << endl;
}

int main()
{
    int a = 10;
    const int &b = a; 
    func();
    func(0.1);
    func(12,5);
    func(b);
}