#include "test3.h"

const int Class2::b = 10;
Class2::Class2(int i):r(i),a(i){
    cout<<"Class2 r="<<r<<",a="<<a<<",b="<<b<<endl;
};
void Class2::print(){
    cout<<"Class2.print"<<endl;
}
void test3(){
    cout<<"test3"<<endl;
    Class2 c21(34);
    c21.print();
    
}