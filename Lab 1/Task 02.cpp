#include<iostream>
using namespace std;
int main()
{
    int avg;
    int marks;
    int ns;
    int tm;
    char sub;
    cout << "Enter the Subject (m for Math)(e for English)(s for science): ";
    cin >> sub;
if(sub!='m' && sub!='e' && sub!='s')
{
    cout << "Wrong choice entered! Try again.";
}
else
{
    cout << "Enter total number of students: ";
    cin >> ns;
    cout << "Enter marks secured in the subject: ";
    cin >> marks;
    cout << "Enter total marks of all the students in the subject: ";
    cin >> tm;
    avg=(tm/ns);
    if(marks>=90)
    {
        cout <<"A\n";
    }
    else if(marks>=80 && marks<90)
    {
        cout <<"B\n";
    }
    else if(marks>=70 && marks<80)
    {
        cout << "C\n";
    }
    else if(marks>=60 && marks<70)
    {
        cout << "D\n";
    }
    else
    {
        cout << "F\n";
    }
}
cout << "Average:"<<avg<<"";
}
