//
// Created by CAIHANYUAN on 2021/4/9.
//

#include "array_init_test.h"
#include <iostream>

using namespace std;

string a[10];
int b[10];

void printArr(string data[]) {
    auto size = data->size();
    cout << "print arr data: size:" << size;
    for (int i = 0; i < size; i++) {
        cout << data[i] << ",";
    }
    cout << endl;
}

int main() {
    string c[10];
    int d[10];
    printArr(a);
    printArr(c);
}

