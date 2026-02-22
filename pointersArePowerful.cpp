#include <iostream>
using namespace std;

int main() {
int arr[5] = {3,33,333,3333,33333};
    int *p = arr;
    for (int i = 0; i < 5; i++) {
        cout << "address of arr[" <<i<< "]:" <<(p+i) << endl;
        cout << "value of arr[" <<i<< "]:" << *(p+i) << endl;
    }
    return 0;
}