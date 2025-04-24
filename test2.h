#include <iostream>
using namespace std;

void test2();
class Class1{
    public:
        Class1(int r1, int r2) {
            R1 = r1;
            R2 = r2;
        }
        void print(){
            cout<<"Class1 R1="<<R1<<",R2="<<R2<<endl;
        }
        void print() const{
            cout<<"Class1 const R1="<<R1<<",R2="<<R2<<endl;
        }
    private:
        int R1;
        int R2;
};
