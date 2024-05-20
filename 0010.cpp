#include <iostream>
using namespace std;
//struct（默认权限为公共） 和 class（默认权限为私有） 只是访问权限的不同
class c1
{
    int a;  
};

struct c2
{
    int a;
};

int main()
{
    c1 c1;
    c2 c2;
    c2.a = 100;
    //c1.a = 100; //不可访问
    cout << "c2 = " << c2.a << endl;
}