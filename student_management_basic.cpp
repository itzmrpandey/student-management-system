#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Define a Student structure
struct Student {
    int id;
    string name;
    int age;
    int phone;

};

int main() {
    vector<Student> students; // list of all students
    int choice;

    do {
        cout << "\n===== Student Management System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Show All Students\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            Student s;
            cout << "Enter ID: ";
            cin >> s.id;
            cout << "Enter Name: ";
            cin.ignore(); // clear buffer
            getline(cin, s.name);
            cout << "Enter Age: ";
            cin >> s.age;
            cout << "Enter Phone Number: ";
            cin >> s.phone;
           

            students.push_back(s);
            cout << "✅ Student added!\n";
        } 
        else if (choice == 2) {
            if (students.empty()) {
                cout << "No students to show.\n";
            } else {
                cout << "\n--- Student List ---\n";
                for (const auto &s : students) {
                    cout << "ID: " << s.id 
                         << " | Name: " << s.name 
                         << " | Age: " << s.age
                         << " | Phone Number: " << s.phone << "\n";
                }
            }
        } 
        else if (choice == 0) {
            cout << "👋 Exiting program...\n";
        } 
        else {
            cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 0);

    return 0;
}
