#include <iostream>
#include <string.h>
using namespace std;

class Student
{
public:
    int grid;
    char name[50];
    int age;
    char course[50];
    float percentage;
};

int main()
{
    Student student1; // object

    student1.grid = 3856;
    strcpy(student1.name, "Arpit");
    student1.age = 18;
    strcpy(student1.course, "DSA");
    student1.percentage = 92.37;

    cout << "GRID: " << student1.grid << endl;
    cout << "Name: " << student1.name << endl;
    cout << "Age: " << student1.age << endl;
    cout << "Course: " << student1.course << endl;
    cout << "Percentage: " << student1.percentage << endl;

    return 0;
}