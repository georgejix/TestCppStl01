#include <iostream>
using namespace std;

void test14();

//类模板中的友元

class Class14_1{
    public:
        Class14_1(string n):name(n){

        }
        //声明Class14_2为Class14_1的友元类,在Class14_2中可以访问Class14_1的私有变量
        friend class Class14_2;
    private:
        string name;
};

class Class14_2{
    public:
        void print(Class14_1 c){
            cout<<c.name<<endl;
        }
};