#include<iostream>
using namespace std;

class Platform;

class Logo {
private:
    string logo;

public:
    Logo() {
        logo = "Blue Bird";
    }

    friend void changeLogo(Logo& l, Platform& p);
    
    void display() {
        cout << "Logo: " << logo << endl;
    }
};

class Server {
public:
    void displayServerStatus() {
        cout << "Server is running smoothly." << endl;
    }
};

class Platform {
private:
    Server server;

public:
    void displayPlatformDetails(Logo& l) {
        l.display();
        server.displayServerStatus();
    }
};

void changeLogo(Logo& l, Platform& p) {
    l.logo = "Dogecoin";
    p.displayPlatformDetails(l);
}

int main() {
    Logo logo;
    Platform platform;

    platform.displayPlatformDetails(logo);
    changeLogo(logo, platform);
    
    return 0;
}
