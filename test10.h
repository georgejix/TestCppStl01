#include <iostream>
using namespace std;

#define MAX(a,b) (a)>(b)?(a):(b)

void test10();

//内联函数
inline int add(int a, int b){
    return a + b;
}