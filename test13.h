#include <iostream>
using namespace std;

void test13();

template<class T> class X{
    //typename告诉编译器，将T::id解释为一个类型
    typename T::id i;
    typedef typename T::id tid;
    tid i2;
    public:
        void f(){
            i.g(1);
            i2.g(2);
        }
};

class Y{
    public:
        class id{
            public:
                void g(int index){
                    cout<<"id.g "<<index<<endl;
                };
        };
};