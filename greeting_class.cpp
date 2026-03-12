#include <iostream>
using namespace std;

class Greeting {
public:
    void greet() {
        cout << "Assalomu alaykum!" << endl;
    }
};

int main() {
    Greeting g;
    g.greet();
}