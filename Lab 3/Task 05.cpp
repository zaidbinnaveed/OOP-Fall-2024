#include<iostream>
#include<string>
using namespace std;

class Stationary{
    string items[5];
    int prices[5];
    public:
    void getinfo();
    void showinfo();
    void showitems();
    void setdata(const string& item, int newprice);
};
void Stationary :: getinfo(){
    for(int i=0;i<5;i++){
        cout << "Enter item : ";
        cin >> items[i];
    }
    for(int j=0;j<5;j++){
        cout << "Enter price for " << items[j] << ": ";
        cin >> prices[j];
    }
}
void Stationary :: showinfo(){
    for(int i=0;i<5;i++){
        cout << "Item : " << items[i] << endl;
    }
    for(int j=0;j<5;j++){
        cout << "Item : " << items[j]<< ", Price : " << prices[j] << endl;
    }
}
void Stationary :: showitems(){
    for(int i=0;i<5;i++){
    cout << "Item : " << items[i] << endl;
    }
}
void Stationary::setdata(const string& item, int newPrice) {
    for (int i = 0; i < 5; i++) {
        if (items[i] == item) {
            prices[i] = newPrice;
            return;
        }
    }
    cout << "Item not found. Please try again!" << endl;
}
int main(){
    Stationary s1;
    s1.getinfo();
    int choice;
    cout << "Welcome to Stationary management system!\n";
    cout << "1. Add items and their prices.\n";
    cout << "2. Show the list of items.\n";
    cout << "3. Modify the prices of items.\n";
    cout << "4. Show all available data.\n";
    cout << "5. Exit\n";
    cout << "Enter your choice : \n";
    cin >> choice;
    
    switch(choice){
        case 1 :
        cout << "You have already entered items and prices.\n";
        break;
        case 2 :
        s1.showitems();
        break;
        case 3 :
        {
        string item;
        int newprice;
        cout << "Enter the item whose price you want to modify: ";
        cin >> item;
        cout << "Enter new price : ";
        cin >> newprice;
        s1.setdata(item, newprice);
        cout << "Data after modifying prices:\n";
        s1.showinfo();
        break;
        }
        case 4 :
        s1.showinfo();
        break;
        case 5 :
        return 0;
        break;
        default :
        cout << "Wrong choice entered! Try again.";
    }
    return 0;
}
