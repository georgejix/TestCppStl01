#include <iostream>
using namespace std;

void test3();
class Class2{
    public:
        Class2(int i);
        static const int b;//静态常量
        void print();
        const int &r;
    private:
        const int a;//常量
};