#include "test7.h"

//需要print1是虚函数，才可以动态绑定，否则一直调用的都是Class7_1的print1函数
void dynamicPrint(Class7_1 *c){
    c->print1();
}

void test7(){
    cout<<"test7"<<endl;
    Class7_1 *c7 = new Class7_2();
    c7->print1();
    //因为Class7_1的析构函数是虚函数，所以在deletec7时，会执行Class7_2的析构函数
    delete c7;

    cout<<"dynamicPrint"<<endl;
    Class7_2 c73;
    dynamicPrint(&c73);

    //构造函数由基类-子类顺序执行
    //析构函数由子类-基类顺序执行
    //成员对象初始化顺序由声明顺序执行
    
    //const和引用类型，必须在编译时指明初始值
}