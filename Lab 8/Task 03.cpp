#include <iostream>
#include <string>
using namespace std;

class Position {
protected:
    float x, y, z;

public:
    Position(float xCoord = 0, float yCoord = 0, float zCoord = 0) 
        : x(xCoord), y(yCoord), z(zCoord) {}

    void setPosition(float xCoord, float yCoord, float zCoord) {
        x = xCoord;
        y = yCoord;
        z = zCoord;
    }

    void displayPosition() const {
        cout << "Position - X: " << x << ", Y: " << y << ", Z: " << z << endl;
    }
};

class Health {
protected:
    int health;

public:
    Health(int h = 100) : health(h) {}

    void setHealth(int h) {
        health = h;
    }

    void displayHealth() const {
        cout << "Health: " << health << endl;
    }
};

class Character : public Position, public Health {
    string name;

public:
    Character(string charName, float xCoord, float yCoord, float zCoord, int h) 
        : Position(xCoord, yCoord, zCoord), Health(h), name(charName) {}

    void displayCharacter() const {
        cout << "Character Name: " << name << endl;
        displayPosition();
        displayHealth();
    }

    void move(float xCoord, float yCoord, float zCoord) {
        setPosition(xCoord, yCoord, zCoord);
        cout << name << " moved to new position." << endl;
    }
};

int main() {
    Character hero("Hero", 10.0, 20.0, 30.0, 100);
    hero.displayCharacter();

    hero.move(15.0, 25.0, 35.0);
    hero.displayCharacter();

    return 0;
}
