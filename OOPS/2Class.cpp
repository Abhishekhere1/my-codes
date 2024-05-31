#include <iostream>
using namespace std;

class Student
{
    public:
    string name;
    int age, roll_number;
    string grade;
};

int main()
{
    Student S1;
    S1.name = "Abhishek";
    S1.age = 10;
    S1.roll_number = 21;
    S1.grade = "A+";

    cout << S1.age << " ";
    Student S2;
    S2.name = "Vishal";
    S2.age = 22;
    S2.roll_number = 121;
    S2.grade = "B+";
    cout << S2.grade << " ";
}