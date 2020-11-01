#include <bits/stdc++.h>

using namespace std;

class Car {
public:
    virtual void Drive() = 0;
};

class Dazhong : public Car {
};

class Benz : public Car {
public:
    virtual void Drive() {
        cout << "Benz-comfortable" << endl;
    }
};

class BMW : public Car {
public:
    virtual void Drive() {
        cout << "BMW-easlier" << endl;
    }
};

void Test() {
    // Dazhong* dazhong = new Dazhong();
    Car* benz = new Benz();
    benz->Drive();
    Car* bmw = new BMW();
    bmw->Drive();
}

int main(int argc, char* argv[]) {
    Test();
    return 0;
}