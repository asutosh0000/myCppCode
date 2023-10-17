#include <iostream>
using namespace std;

class Turtle {
private:
    double x;
    double y;
    double velocity;
    double time;

public:
    Turtle(double initialX = 0, double initialY = 0, double initialVelocity = 1)
        : x(initialX), y(initialY), velocity(initialVelocity), time(0) {}

    void moveUp(double d) {
        y += d;
        time += d / velocity;
    }

    void moveDown(double d) {
        y -= d;
        time += d / velocity;
    }

    void moveLeft(double d) {
        x -= d;
        time += d / velocity;
    }

    void moveRight(double d) {
        x += d;
        time += d / velocity;
    }

    void move() {
        int choice;
        double distance;
        cout << "Choose an option:" << endl;
        cout << "1. Move Up" << endl;
        cout << "2. Move Down" << endl;
        cout << "3. Move Left" << endl;
        cout << "4. Move Right" << endl;
        cin >> choice;
        cout << "Enter distance: ";
        cin >> distance;
        switch (choice) {
            case 1:
                moveUp(distance);
                break;
            case 2:
                moveDown(distance);
                break;
            case 3:
                moveLeft(distance);
                break;
            case 4:
                moveRight(distance);
                break;
            default:
                cout << "Invalid choice" << endl;
                break;
        }
    }

    void display() {
        cout << "Turtle's current position: (" << x << ", " << y << ")" << endl;
    }

    void input() {
        cout << "Enter initial X coordinate: ";
        cin >> x;
        cout << "Enter initial Y coordinate: ";
        cin >> y;
        cout << "Enter velocity: ";
        cin >> velocity;
    }
};

int main() {
    Turtle turtle;
    turtle.input();

    while (true) {
        int option;
        cout << "Choose an option:" << endl;
        cout << "1. Move" << endl;
        cout << "2. Display" << endl;
        cout << "3. Exit" << endl;
        cin >> option;

        switch (option) {
            case 1:
                turtle.move();
                break;
            case 2:
                turtle.display();
                break;
            case 3:
                return 0;
            default:
                cout << "Invalid choice" << endl;
                break;
        }
    }

    return 0;
}
