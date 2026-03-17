#include <iostream>
using namespace std;

class Car {
private:
    int speed;

public:
    void setSpeed() {
        speed = 99;
    }

    void showSpeed() {
        cout << "Speed: " << speed << endl;
    }
};

int main() {
    Car c1;
    c1.setSpeed();
    c1.showSpeed();
    return 0;
}