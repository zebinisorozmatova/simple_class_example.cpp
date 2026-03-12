#include <iostream>
using namespace std;

class Car {
public:
    void start() {
        cout << "Car started" << endl;
    }
};

int main() {
    Car myCar;
    myCar.start();
}