#include <iostream>
using namespace std;

int main() {
    int a=33;
    int *p;

    p=&a;

    cout<<"stored in p:"<<p<<endl;
    cout<<"value in a thru p:"<<*p<<endl;

    *p=333;

    cout<<"new value a:"<<*p<<endl;
    return 0;
}