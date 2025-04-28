#include "test10.h"

//友元函数，不需要用过Class10::实现，可以访问Class10的私有变量
void printClass10(Class10 &c){
    cout<<"year-month="<<c.year<<"-"<<c.month<<endl;
}

void test10(){
    cout<<"test10"<<endl;

    int i1 = MAX(1,3);
    cout<<"MAX(1,2):"<<i1<<endl;

    int i2 = add(3,1);
    cout<<"i2="<<i2<<endl;

    Class10 c10(2025, 4);
    printClass10(c10);

    Class10_1 c10_1;
    c10_1.print1();//继承的Class10的函数
    c10_1.print2();
    c10_1.day;
}