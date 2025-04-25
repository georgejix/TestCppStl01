#include <iostream>
using namespace std;

void test8();

class Class8{
    public:
        //成员初始化表，不可写在函数声明上，放在构造函数与构造函数体之间，逗号间隔
        Class8(int y, int m, int d):yy(y),MM(m),yy_(yy),dd(d){
            cout<<"yy-MM-dd "<<yy<<"-"<<MM<<"-"<<dd<<endl;
            cout<<"yy_="<<yy_<<endl;
        }
        //const放在最后，禁止函数修改类内部全部变量
        void print() const{
            //yy = 2026;
        }
        //const修饰，不允许重写函数
        const void print2();
    private:
        int yy,MM;
        const int dd;
        int & yy_;
};