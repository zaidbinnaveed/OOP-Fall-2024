#include <iostream>
#include <string>
using namespace std;

class Character {
protected:
    int health;
    int damage;

public:
    Character(int h, int d) : health(h), damage(d) {}

    virtual void display() const {
        cout << "Character - Health: " << health << ", Damage: " << damage << endl;
    }
};

class Enemy : public Character {
public:
    Enemy(int h, int d) : Character(h, d) {}

    void display() const override {
        cout << "Enemy - Health: " << health << ", Damage: " << damage << endl;
    }
};

class Player : public Character {
public:
    Player(int h, int d) : Character(h, d) {}

    void display() const override {
        cout << "Player - Health: " << health << ", Damage: " << damage << endl;
    }
};

class Wizard : public Player {
    int magicPower;
    string spells;

public:
    Wizard(int h, int d, int mp, const string &s) : Player(h, d), magicPower(mp), spells(s) {}

    void display() const override {
        cout << "Wizard - Health: " << health << ", Damage: " << damage
             << ", Magic Power: " << magicPower << ", Spells: " << spells << endl;
    }
};

int main() {
    Wizard wizard(100, 30, 50, "Fireball, Lightning Bolt");
    wizard.display();
    return 0;
}
