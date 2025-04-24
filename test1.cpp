#include "test1.h"
#include<iostream>

void test1(){
    std::cout<<"test1"<<std::endl;
    int i1 = 1;
    std::cout<<"i1="<<i1<<std::endl;

    //动态内存分配运算符的使用，new delete，new相当于c语言的malloc,delete相当于c语言的free
    //初始化一个占1长度的int指针，
    int *p1;
    p1 = new int;
    std::cout<<"p1="<<*p1<<std::endl;

    //初始化一个占1长度，指向值为2的int指针，
    int *p2 = new int(2);
    std::cout<<"p2="<<*p2<<std::endl;

    //初始化一个占10长度的int指针
    int *p3 = new int[10];
    *p3 = 22;
    *(p3+1) = 23;
    std::cout<<"p3="<<*p3<<","<<*(p3+1)<<std::endl;

    delete p1;
    delete p2;
    delete []p3;
    //已经释放，此时打印的是脏数据
    std::cout<<"p3="<<*p3<<","<<*(p3+1)<<std::endl;

    //实例化引用类型b，指向a，b和a指向同一内存地址
    int a = 1;
    int &b = a;
    b = 2;
    std::cout<<"&a="<<&a<<",&b="<<&b<<std::endl;
    std::cout<<"a="<<a<<",b="<<b<<std::endl;

    int c = 3, *d = &c, *&e = d, *f = d;
    std::cout<<"c="<<c<<",*d="<<*d<<",*e="<<*e<<",*f="<<*d<<std::endl;
    std::cout<<"&c="<<&c<<",d="<<d<<",e="<<e<<",f="<<f<<std::endl;
}