#include <iostream>
using namespace std;

class Text {
public:
    void showText() {
        cout << "Learning C++ classes" << endl;
    }
};

int main() {
    Text t;
    t.showText();
}