#include <iostream>
using namespace std;

class SmartPhone{
    char brand[10];
    char model[10];
    float display_resolution;
    int ram;
    int rom;
    int storage;
    public:
    void getdata();
    void displaydata();
    void setvalue(float nv);
};
void SmartPhone :: getdata(){
    cout << "Enter brand name : ";
    cin >> brand;
    cout << "Enter Model : ";
    cin >> model;
    cout << "Enter display resolution : ";
    cin >> display_resolution;
    cout << "Enter ROM : ";
    cin >> rom;
    cout << "Enter RAM : ";
    cin >> ram;
    cout << "Enter storage capacity (in GBs) : ";
    cin >> storage;
}
void SmartPhone :: displaydata(){
    cout << "Brand name : " << brand << endl;
    cout << "Model of phone : " << model << endl;
    cout << "Display Resolution : " << display_resolution << endl;
    cout << "ROM : " << rom << endl;
    cout << "RAM : " << ram << endl;
    cout << "Storage Capacity available : " << storage;
}
int main() {
    int choice;
    SmartPhone z1;
    z1.getdata();
    z1.displaydata();
    cout << "\n";
    cout << "Welcome to Samsung. PLease choose your action:\n";
    cout << "1. Phone Call\n";
    cout << "2. Send Message\n";
    cout << "3. Connect to Wi-Fi\n";
    cout << "4. Browse the internet\n";
    cout << "5. Exit\n";
    cout << "Enter your choice:\n";
    cin >> choice;
    switch(choice){
        case 1:
        long long num;
        cout << "Enter contact number to place phone call to : ";
        cin >> num;
        cout << "Calling: "  << num << "...." << endl;
        break;
        case 2:
        char name[15];
        char sent[20];
        cout << "Enter name of the person to send the message to : ";
        cin >> name;
        cin.ignore();
        cout << "Enter message : ";
        cin.getline(sent, 20);
        cout << "Message \"" << sent << "\" sent successfully to " << name << endl;
        break;
        case 3:
        int wifi;
        cout << "Is internet available (1 for yes)(2 for no) : ";
        cin >> wifi;
        if(wifi == 1){
            cout << "Wi-Fi connected successfully!";
        }
        else if (wifi == 2){
            cout << "Cannot connect to wi-fi as internet not available.";
        }
        else{
            cout << "Wrong choice entered! Try again.";
        }
        break;
        case 4:
        cout << "https://www.google.com.pk/\n";
        cout << "Put this link in the search bar and browse whatever you want.";
        break;
        case 5:
        return 0;
        break;
        default:
        cout << "Wrong choice entered! Try again.";
    }
    return 0;
}
