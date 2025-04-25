#include "test9.h"

void test9(){
    cout<<"test9"<<endl;

    Class9 c9(1);
    Class9 c92(2);
    c92 = c9;
    cout<<c92.mm<<endl;
}