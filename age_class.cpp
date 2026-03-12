#include <iostream>
using namespace std;

class Age {
public:
    void showAge() {
        cout << "Age: 20" << endl;
    }
};

int main() {
    Age a;
    a.showAge();
}