#include <iostream>
using namespace std;

void test5();

class Class5{
    public:
        int m;
        Class5(){
            m = 0;
            cout<<"new Class5"<<endl;
        }
        Class5(int i){
            m = i;
            cout<<"new Class5 "<<i<<endl;
        }
        ~Class5(){
            cout<<"~Class5 "<<m<<endl;
        }
};