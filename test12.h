#include <iostream>
using namespace std;

void test12();

//多继承
class Class12{

};

class Class12_1{

};

class Class12_2{
    
};

class Class12_3:public Class12_1, public Class12_2{

};

/*
重载运算符
不能臆造新的运算符
不能改变运算符操作数的个数
不能改变运算符原有的优先级
不能改变运算符原有的结合性
不能改变运算符原有的语法结构
*/
Class12 operator+(Class12 c1, Class12 c2);
//报错，+运算符不能超过2个参数
//Class12 operator+(Class12 c1, Class12 c2， Class12 c3);