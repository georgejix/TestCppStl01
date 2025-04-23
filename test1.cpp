#include<iostream>

int main(){
    int i1 = 1;
    std::cout<<"i1="<<i1<<std::endl;

    int *p1 = new int[10];
    *p1 = 22;
    *(p1+1) = 23;
    std::cout<<"p1="<<*p1<<","<<*(p1+1)<<std::endl;

    int *p2 = new int(2);
    std::cout<<"p2="<<*p2<<std::endl;

    int *p3;
    p3 = new int;
    std::cout<<"p3="<<*p3<<std::endl;
}