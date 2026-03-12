#include <iostream>
using namespace std;

class Hello {
public:
    void sayHello() {
        cout << "Hello from class!" << endl;
    }
};

int main() {
    Hello obj;
    obj.sayHello();
    return 0;
}