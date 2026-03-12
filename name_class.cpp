#include <iostream>
using namespace std;

class Person {
public:
    void showName() {
        cout << "My name is Ali" << endl;
    }
};

int main() {
    Person p;
    p.showName();
}