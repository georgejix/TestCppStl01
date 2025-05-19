#include "test14.h"

//普通友元函数
void print14_1(Class14_1& c){
    cout<<"c.name="<<c.name<<endl;
}

void test14(){
    cout<<"test14"<<endl;
    cout<<"普通友元函数，友元类"<<endl;
    Class14_1 c14_1("zhangsan");
    Class14_2 c14_2;
    c14_2.print(c14_1);
    print14_1(c14_1);

    cout<<"类模板中，其他类的函数为友元函数"<<endl;
    Class14_3 c14_3(string("678"));
    Class14_4<string> c14_4;
    c14_4.print(c14_3);
}