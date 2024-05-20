/*联合体学习*/
#include <iostream>
using namespace std;

//联合体中共用内存地址
union myun{
    struct{
        int a;
        int b;
        int c;
    }u;
    int k;
}x;

int main()
{
    x.u.a = 10;
    x.u.b = 20;
    x.u.c = 30;
    x.k = 40;
    cout << "a = " << x.u.a << endl
         << "b = " << x.u.b << endl
         << "c = " << x.u.c << endl
         << "k = " << x.k << endl;
    return 0;
}