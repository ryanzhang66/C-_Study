# C++学习

## C++核心编程
### 内存分区
C++的代码内存分为:
- 代码区
- 全局区：存放全局变量，静态变量，常量
- 栈区：栈区数据由编译器管理开辟和释放
    ```c++
    int main()
    {
        //栈区数据由编译器管理开辟和释放，不要返回局部变量地址
        int *p = func();

        cout << *p << endl; //不要返回
        cout << *p << endl;
    }
    ``` 
    ```c++
    int * func(int b) //形参数据也是分配在栈区  
    {  
        b = 100;  
        int a = 10;  
        return &a;  
    }  
    ```  
- 堆区

#### new的使用
首先new 在堆区开辟空间，返回的是该数据的指针地址，也就是说我们需要一个指针类型的变量来存放我们创建的new对象，他跟c语言当中的malloc有相同的作用。

