#include<iostream>
using namespace std;

class Square{
    float sideLength;
    float area;
    static float allareas;
    public:
    Square(){
        sideLength = 6;
    }
    Square(float sideLength){
        this -> sideLength = sideLength;
    }
    
    int calculate_area(){
        return sideLength * sideLength;
    }
    
    void update_allareas(){
        allareas += calculate_area();
    }
    void display_info(){
        area = calculate_area();
        update_allareas();
        cout << "Area : " << calculate_area() << endl;
        cout << "All areas : " << allareas << endl;
    }
};
float Square :: allareas = 0;
int main(){
    Square s1;
    s1.display_info();
    Square s2(7);
    s2.display_info();
    Square s3(8);
    s3.display_info();
    
}
