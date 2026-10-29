#include<iostream>
using namespace std;

class student {
    private:
        int rollno;
        string name;

    public:
        student(int r, string n) {
            rollno = r;
            name = n;
            cout << "Student object created" << endl;
        }

        void display() {
            cout << "Roll Number: " << rollno << endl;
            cout << "Name: " << name << endl;
        }

        ~student() {
            cout << "Student object destroyed" << endl;
        }
};

int main() {
    int r;
    string n;

    cout << "Enter roll number: ";
    cin >> r;

    cout << "Enter name: ";
    cin >> n;

    student s1(r, n);
    s1.display();

    return 0;
}
