#include <iostream>
using namespace std;

class Message {
public:
    void hello() {
        cout << "Hello!" << endl;
    }

    void bye() {
        cout << "Goodbye!" << endl;
    }
};

int main() {
    Message m;
    m.hello();
    m.bye();
}