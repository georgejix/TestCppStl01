#include <iostream>
using namespace std;

void test9();

class Class9{
    public:
        Class9(int i){
            mm = i;
        }
        //重载=运算符
        Class9 &operator=(const Class9& c){
            mm = c.mm;
            cout<<"mm = c.mm:"<<mm<<endl;
            return *this;
        }
        int mm;
};