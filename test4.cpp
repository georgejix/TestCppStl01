#include "test3.h"

struct Date
{
    unsigned int yy,mm,dd;
    //结构体可以写函数
    void dsp(){
        cout<<yy<<"-"<<mm<<"-"<<dd<<endl;
    }
};
void test4(){
    cout<<"test4"<<endl;
    //void指针
    void *ptr1;
    int i1 = 23;
    int *ptr2 = &i1;
    ptr1 = ptr2;
    cout<<"*ptr1="<<*(int *)ptr1<<endl;

    Date date;
    date.yy = 2025;
    date.mm = 4;
    date.dd = 24;
    date.dsp();

    int array1[10];
    array1[3] = 8;
    int *ptr3 = &array1[3];
    int *ptr4 = array1 + 3;
    cout<<"*ptr3="<<*ptr3<<",*ptr4="<<*ptr4<<endl;

    int array2[] = {2,5,6,2,6,3,342,312};
}