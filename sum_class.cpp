#include <iostream>
using namespace std;

class Sum {
public:
    void add() {
        cout << 5 + 7 << endl;
    }
};

int main() {
    Sum s;
    s.add();
}