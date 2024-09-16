#include<iostream>
using namespace std;

class WeekDays {
private:
    string Days[7];
    int CurrentDay;

public:
    WeekDays() {
        Days[0] = "Sunday";
        Days[1] = "Monday";
        Days[2] = "Tuesday";
        Days[3] = "Wednesday";
        Days[4] = "Thursday";
        Days[5] = "Friday";
        Days[6] = "Saturday";
        CurrentDay = 0;
    }

    WeekDays(int current_day) {
        Days[0] = "Sunday";
        Days[1] = "Monday";
        Days[2] = "Tuesday";
        Days[3] = "Wednesday";
        Days[4] = "Thursday";
        Days[5] = "Friday";
        Days[6] = "Saturday";
        CurrentDay = current_day % 7;
    }

    string getCurrentDay() {
        return Days[CurrentDay];
    }

    string getNextDay() {
        return Days[(CurrentDay + 1) % 7];
    }

    string getPreviousDay() {
        return Days[(CurrentDay - 1 + 7) % 7];
    }

    string getNthDayFromToday(int n) {
        return Days[(CurrentDay + n) % 7];
    }
};

int main() {
    WeekDays week;  // Using default constructor
    cout << "Current Day: " << week.getCurrentDay() << endl;
    cout << "Next Day: " << week.getNextDay() << endl;
    cout << "Previous Day: " << week.getPreviousDay() << endl;
    cout << "5th Day from Today: " << week.getNthDayFromToday(5) << endl;

    WeekDays week2(4);  // Using parameterized constructor
    cout << "\nCurrent Day: " << week2.getCurrentDay() << endl;
    cout << "Next Day: " << week2.getNextDay() << endl;
    cout << "Previous Day: " << week2.getPreviousDay() << endl;
    cout << "3rd Day from Today: " << week2.getNthDayFromToday(3) << endl;

    return 0;
}
