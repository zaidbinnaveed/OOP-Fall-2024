#include <iostream>
using namespace std;

class BoardMarker{
    private:
    char brand[15];
    char shade[15];
    bool refillable = true;
    bool ink_status_depleted = true ;
    public:
    void getdata();
    void showdata();
};
void BoardMarker :: getdata(){
    cout << "Enter brand : ";
    cin >> brand;
    cout << "Enter shade : ";
    cin >> shade;
    cout << "Is boardmarker refillable (1 for true) (0 for false) : ";
    cin >> refillable;
    cout << "Is boardmarker depleted (1 for true) (0 for false) : ";
    cin >> ink_status_depleted;
}
void BoardMarker :: showdata(){
    cout<< "Boardmarker brand is : " << brand << endl;
    cout<< "Boardmarker shade is : " << shade << endl;
    cout<< "Boardmarker is refillable : " <<(refillable ? "True" : "False") << endl;
    cout<< "Boardmarker ink is depleted : " << (ink_status_depleted ? "True" : "False");
}
int main(){
    BoardMarker s1;
    s1.getdata();
    s1.showdata();
    return 0;
}
  
