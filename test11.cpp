#include "test11.h"

void test11(){
    cout<<"test11"<<endl;
    //不能访问基类的私有，保护变量
    Class11_1 c11_1;
    //c11_1.a = 0;
    //c11_1.b = 1;
    c11_1.c = 2;

    Class11_2 c11_2;
    //c11_2.a = 0;
    //c11_2.b = 1;
    //c11_2.c = 2;

    Class11_3 c11_3;
    //c11_3.a = 0;
    //c11_3.b = 1;
    //c11_3.c = 2;
}