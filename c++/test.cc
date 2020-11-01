#include <bits/stdc++.h>

using namespace std;

int main() {
    int a[8];
    int *b = a;
    cout << &a[0] << endl;
    cout << &a << endl;
    cout << sizeof(*b) << endl;
    return 0;
}