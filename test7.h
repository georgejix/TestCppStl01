#include <iostream>
using namespace std;

void test7();

class Class7_1{
    public:
        Class7_1(){
            cout<<"new Class7_1"<<endl;
        }
        virtual void print1(){
            cout<<"Class7_1 print1"<<endl;
        }
        virtual void print2() = 0;//纯虚函数
        virtual ~Class7_1(){
            cout<<"~Class7_1"<<endl;
        }
};

class Class7_2:public Class7_1{
    public:
        Class7_2(){
            cout<<"new Class7_2"<<endl;
        }
        void print1() override{
            cout<<"Class7_2 print1"<<endl;
        }
        void print2() override{
            cout<<"Class7_2 print2"<<endl;
        }
        ~Class7_2(){
            cout<<"~Class7_2"<<endl;
        }
};