#include <iostream>
using namespace std;

void test6();

class Class6{
    public:
        Class6(int i){
            cout<<"new Class6 "<<i<<endl;
        }
};

class Class6_2:public Class6{
    public:
        Class6_2(int i);
};