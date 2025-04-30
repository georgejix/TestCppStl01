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
Class12 add(Class12 c1, Class12 c2);