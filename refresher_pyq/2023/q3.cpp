#include <iostream>
using namespace std;

class MyClass {
private:
    int x;

public:
    MyClass(int val) { x = val; }

    // Friend function declaration
    friend void printX(MyClass obj);
};

// Friend function definition
void printX(MyClass obj) {
    cout << "Value of x: " << obj.x << endl;
}

int main() {
    MyClass obj(10);
    printX(obj);
    return 0;
}