#include <bits/stdc++.h>
using namespace std;

struct A {
    string name;
    void (*callback)(void* arg);
    A(string m_name) : name(m_name) {}
    ~A() {
        this->callback(&name);
    }
};

void callback(void* arg) {
    string* words = (string*)arg;
    cout << *words << " in callback" << endl;
    return;
}
void foo() {
	A a("struct A");
	a.callback = callback;
}
int main() {
    foo();
    return 0;
}
