#include <iostream>
using namespace std;

void swap (int a ,int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swap_p (int *a ,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

//冒泡排序
void buffer(int *arr, int len)
{
    for (int i = 0; i< len -1 ; i++)
    {
        for (int j = 0; j< len -i -1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main()
{
    //空指针
    //空指针初始化
    // int *p = NULL;
    int a = 10 ;
    //空指针不能访问
    //*p = 100;

    //野指针：指向没有声请的地址

    // const 修饰指针 = 常量指针 
    //特点：指针的指向可以改变，但是指向的值不能改变。const 后面跟的是 int
    // const int *p = &a;

    //int * const p = &a ;
    //指针常量：指向的值可以更改，指针的指向不可以更改。

    int arr[] = {1,2,3,4};

    cout << "第一个元素为：" << arr[0] << endl;

    int * p = arr ;
    cout << "通过指针访问第一个元素：" << *p << endl;

    p++; //指针偏移4个字节

    cout << "通过指针访问第二个元素: " << *p << endl;

    cout << "利用指针遍历数组" << endl;
    int * p_2 = arr;

    for (int i = 0; i < 4; i++)
    {
        cout << *p_2 << endl;
        p_2 ++;
    }

    cout << "指针和函数" << endl;

    int b = 20;
    swap_p(&a, &b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    int ar[5] = {4,6,3,7,5};

    int len = sizeof(ar) / sizeof(ar[0]);

    buffer(ar, len);

    for (int i=0; i<5; i++)
    {
        int a_swap = ar[i]; 
        printf("%d\n",a_swap);
    }



}