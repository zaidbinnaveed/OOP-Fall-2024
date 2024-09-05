#include <iostream>
using namespace std;

class WaterBottle{
    char company[10];
    char color[10];
    float water;
    float water_in_litres;
    public:
    void getdata();
    void displaydata();
    void setvalue(float nv);
};
void WaterBottle :: getdata(){
    cout << "Enter company name : ";
    cin >> company;
    cout << "Enter color : ";
    cin >> color;
    cout << "Enter water quantitiy (in millilitres) : ";
    cin >> water;
    water_in_litres = water/1000;
}
void WaterBottle :: displaydata(){
    cout << "Manufacturer name : " << company << endl;
    cout << "Color of water bottle : " << color << endl;
    cout << "Water quantity in bottle in millilitres : " << water << endl;
    cout << "Water quantity in bottle in litres : " << water_in_litres;
}
void WaterBottle :: setvalue(float nv){
    water=nv;
    water_in_litres = water / 1000;
}
int main() {
    int choice;
    float nv;
    WaterBottle z1;
    z1.getdata();
    z1.displaydata();
    cout << "Do you want to update the quantity of water (1 for yes)(2 for no) : ";
    cin >> choice;
    if (choice == 1){
        cout << "Enter new quantity of water in millilitres : ";
        cin >> nv;
        z1.setvalue(nv);
        cout<< "Information after updation:\n";
        z1.displaydata();
    }
    else if(choice == 2){
        return 0;
    }
    else{
        cout << "Wrong choice entered! Try again.";
    }
    return 0;
}
