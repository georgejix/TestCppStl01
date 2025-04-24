#include "test5.h"

void test5(){
    cout<<"test5"<<endl;
    //extern    static  register
    //volatile

    //两种实例化方式
    Class5 c51;
    Class5 c52 = Class5();
    //指针用new
    Class5 *c53 = new Class5();
    delete c53;

    //两种实例化方式
    Class5 c54(4);
    Class5 c55 = Class5(5);
    //指针用new
    Class5 *c56 = new Class5(6);
    c56->m = 77;
    delete c56;
}