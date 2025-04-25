#include "test8.h"

//不允许重写
/*void Class8::print2(){
    
}*/

void test8(){
    cout<<"test8"<<endl;
    Class8 c8(2025,4,25);

    //拷贝函数和赋值函数，拷贝函数是在对象被创建时调用，赋值函数是对象已经存在时调用
    string s1("hello");
    string s2("world");
    string s3 = s1;//调用了拷贝函数，最好写成string s3(s1);
    s3 = s2;//调用了赋值函数
    string s4(s1);
    cout<<"s1="<<s1<<",s2="<<s2<<",s3="<<s3<<",s4="<<s4<<endl;

}