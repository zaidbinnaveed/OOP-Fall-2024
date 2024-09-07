#include <iostream>
#include <string>
using namespace std;

class Calendar {
    string months[12][31];
    int currentYear;

public:
    Calendar(int year) {
        currentYear = year;
        for (int i = 0; i < 12; i++) {
            for (int j = 0; j < 31; j++) {
                months[i][j] = "";
            }
        }
    }

    void addTask(int month, int day, string task) {
        if (month < 1 || month > 12 || day < 1 || day > 31) {
            cout << "Invalid date!" << endl;
            return;
        }
        if (months[month - 1][day - 1] != "") {
            cout << "Task already exists on this day." << endl;
            return;
        }
        months[month - 1][day - 1] = task;
        cout << "Task added successfully." << endl;
    }

    void removeTask(int month, int day) {
        if (month < 1 || month > 12 || day < 1 || day > 31) {
            cout << "Invalid date!" << endl;
            return;
        }
        if (months[month - 1][day - 1] == "") {
            cout << "No task exists on this day." << endl;
            return;
        }
        months[month - 1][day - 1] = "";
        cout << "Task removed successfully." << endl;
    }

    void displayTasks() {
        bool hasTasks = false;
        cout << "Tasks for the year " << currentYear << ":" << endl;
        for (int i = 0; i < 12; i++) {
            for (int j = 0; j < 31; j++) {
                if (months[i][j] != "") {
                    cout << "Month " << (i + 1) << ", Day " << (j + 1) << ": " << months[i][j] << endl;
                    hasTasks = true;
                }
            }
        }
        if (!hasTasks) {
            cout << "No tasks found." << endl;
        }
    }
};

int main() {
    Calendar cal(2024);
    cal.addTask(1, 15, "Doctor appointment");
    cal.addTask(2, 20, "Project deadline");
    cal.addTask(3, 5, "Friend's birthday");
    cal.addTask(4, 10, "Gym workout");
    cal.addTask(5, 25, "Meeting with team");

    cout << "\nTasks before removal:" << endl;
    cal.displayTasks();

    cal.removeTask(3, 5);

    cout << "\nTasks after removal:" << endl;
    cal.displayTasks();

    return 0;
}
