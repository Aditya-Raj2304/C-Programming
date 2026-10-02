#include <iostream>
#include <stdio.h>
#include <fstream>
using namespace std;
class Student
{
private:
    int rno, marks;
    char name[20], division[10];
public:
    void input()
    {
        cout << "\nEnter roll number of student : ";
        cin >> rno;
        cout << "\nEnter name of student : ";
        fflush(stdin);
        gets(name);
        cout << "\nEnter the marks  : ";
        cin >> marks;
        cout << "\nEnter division student : ";
        fflush(stdin);
        gets(division);
    }
    void output()
    {
        cout << "\n"
             << rno << "\t" << name << "\t" << marks << "\t" << division;
    }
};
int main()
{
    Student s[3];
    ofstream file;
    file.open("Student.dat", ios::out);
    int i;
    for (i = 0; i < 3; i++)
    {
        s[i].input();
        file.write((char *)&s[i], sizeof(s[i]));
    }
    file.close();
    return 0;
}
