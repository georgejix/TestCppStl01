#include <iostream>
using namespace std;

void test11();

/*
公有继承，继承的成员属性访问权限不变
保护继承，继承的成员属性访问权限均为 protected
私有继承，继承的成员属性访问权限均为 private

虽然无法访问父类私有成员
但父类的私有成员也是被继承下来了的
只是编译器隐藏了，我们无法访问

*/

class Class11{
    private:
        int a;
    protected:
        int b;
    public:
        int c;
};

class Class11_1:public Class11{
    public:
        Class11_1(){
            //不能访问基类的私有变量a
            //a = 1;
            b = 2;
            c = 3;
        }
};

class Class11_2:protected Class11{
    public:
        Class11_2(){
            //不能访问基类的私有变量a
            //a = 1;
            //打印出的Class11的size为12，包含了3个int数据，虽然a不可见，但仍存在
            cout<<"sizeof(a)="<<sizeof(Class11)<<endl;
            b = 2;
            c = 3;
        }
};

class Class11_2_1:public Class11_2{
    public:
        Class11_2_1(){
            //不能访问基类的私有变量a
            //a = 1;
            b = 2;
            c = 3;
        }
};

class Class11_3:private Class11{
    public:
        Class11_3(){
            //不能访问基类的私有变量a
            //a = 1;
            b = 2;
            c = 3;
        }
};

//Class11_3私有继承Class11，会将a,b,c都变为private类型
class Class11_3_1:public Class11_3{
    public:
        Class11_3_1(){
            //a = 1;
            //b = 2;
            //c = 3;
        }
};