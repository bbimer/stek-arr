#include <iostream>
#include "stek.h"
using namespace std;

int main() {
    Array arr1(5);
    arr1.print();

    Array arr2(6, 10, 30);
    arr2.print();

    arr2.sorted();
    cout << "min value - " << arr2.min() << endl;
    cout << "max value - " << arr2.max() << endl;
    cout << "==================================" << endl;
    arr2.pop();
    arr2.print();
    arr2.clear();
    arr2.print();
    //cout << arr2.top();

    return 0;
}
