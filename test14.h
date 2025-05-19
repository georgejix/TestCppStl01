#include <iostream>
using namespace std;
//using std::cout;

void test14();

//类模板中的友元


class Class14_1{
    public:
        Class14_1(string n):name(n){

        }
        //声明Class14_2为Class14_1的友元类,在Class14_2中可以访问Class14_1的私有变量
        friend class Class14_2;
        friend void print14_1(Class14_1& c);
    private:
        string name;
};
//1.传统友元类，可以访问Class14_1中私有变量
class Class14_2{
    public:
        void print(Class14_1& c){
            cout<<"c.name="<<c.name<<endl;
        }
};



//类模板中其他模板类的一个函数为友元函数
template<class T>
class Class14_3;

template<class T>
class Class14_4{
    public:
        void print(const Class14_3<T>& obj);
};

template<class T>
class Class14_3{
    private:
        T data;
        friend void Class14_4<T>::print(const Class14_3<T>& obj);
    public:
        Class14_3(T d):data(d){}
};

template<class T>
void Class14_4<T>::print(const Class14_3<T>& obj){
    cout<<"obj.data="<<obj.data<<endl;
}
