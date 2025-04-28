#include <iostream>
using namespace std;

#define MAX(a,b) (a)>(b)?(a):(b)

void test10();

//内联函数
inline int add(int a, int b){
    return a + b;
}

class Class10{
    private:
        int year, month;
    public:
        int day;
        Class10(){}
        Class10(int y, int m):year(y), month(m){

        }
        //友元函数
        friend void printClass10(Class10 &c);
        void print1(){
            cout<<"print1"<<endl;
        }
};

class Class10_1:public Class10{
    public:
        void print2(){
            cout<<"print2"<<endl;
        }
};