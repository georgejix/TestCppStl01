#include "test6.h"

Class6_2::Class6_2(int i):Class6(i){
    cout<<"new Class6_2 "<<i<<endl;
}

void test6(){
    cout<<"test6"<<endl;
    Class6_2 c61(23);
}