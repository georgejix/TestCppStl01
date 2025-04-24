#include "test2.h"
#define tel 123456

void test2(){
    cout<<"test2"<<endl;
    //const
    const int g = 123;
    char h[g];
    cout<<"tel="<<tel<<endl;

    //常量指针，ptr1不能修改，*ptr1可以改变
    char * const ptr1 = new char('a');
    cout<<"ptr1="<<*ptr1<<endl;
    //ptr1 = new char('c');
    *ptr1 = 'b';
    cout<<"ptr1="<<*ptr1<<endl;

    //*ptr2不能修改，ptr2可以改变
    const int *ptr2 = new int(25);
    ptr2 = new int(26);
    //*ptr2 = 27;
    cout<<"*ptr2="<<*ptr2<<endl;

    //i1不能修改，通常用来修饰函数形参
    int a = 23;
    int const &i1 = a;
    //i1 = c;
    cout<<"i1="<<i1<<endl;

    //const修饰函数
    Class1 c11(1,2);
    c11.print();
    const Class1 c12(2,3);
    c12.print();
    
}