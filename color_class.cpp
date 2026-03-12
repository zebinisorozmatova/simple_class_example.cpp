#include <iostream>
using namespace std;

class Color {
public:
    void showColor() {
        cout << "My favorite color is blue" << endl;
    }
};

int main() {
    Color c;
    c.showColor();
}