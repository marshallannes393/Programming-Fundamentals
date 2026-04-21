#include <iostream>
#include <string>
using namespace std;

int main() {
    string correctUsername = "admin";
    string correctPassword = "1234";
    string usernames[3]; 
    bool login = false;

    
    for(int i = 0; i < 3; i++) {
        string enteredPass;
        cout << "Attempt " << (i + 1) << " - Enter Username: ";
        cin >> usernames[i];
        cout << "Enter Password: ";
        cin >> enteredPass;

        if(usernames[i] == correctUsername && enteredPass == correctPassword) {
            login = true;
            cout << "\nLogin Successful!\n";
            break;
        } else {
            cout << "Incorrect credentials.\n\n";
        }
    }

    if(login) {
        
        string studentNames[3];
        int studentAges[3];
        string courses[3];
        
        int studentCount = 0;
        int courseCount = 0;
        int choice;

        while(true) {
            cout << "\n--- University Management System ---\n";
            cout << "1. Add Student\n";
            cout << "2. View Students\n";
            cout << "3. Add Course\n";
            cout << "4. View Courses\n";
            cout << "5. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;

            if(choice == 1) {
                if(studentCount < 3) {
                    cout << "Enter Student Name: ";
                    cin >> studentNames[studentCount];
                    cout << "Enter Student Age: ";
                    cin >> studentAges[studentCount];
                    studentCount++;
                    cout << "Student added successfully.\n";
                } else {
                    cout << "Maximum students (3) already added!\n";
                }
            } 
            else if(choice == 2) {
                if(studentCount == 0) {
                    cout << "No students registered yet.\n";
                } else {
                    cout << "\n--- Registered Students ---\n";
                    for(int i = 0; i < studentCount; i++) {
                        cout << i + 1 << ". Name: " << studentNames[i] << ", Age: " << studentAges[i] << endl;
                    }
                }
            } 
            else if(choice == 3) {
                if(courseCount < 3) {
                    cout << "Enter Course Name: ";
                    cin >> courses[courseCount];
                    courseCount++;
                    cout << "Course added successfully.\n";
                } else {
                    cout << "Maximum courses (3) already added!\n";
                }
            } 
            else if(choice == 4) {
                if(courseCount == 0) {
                    cout << "No courses registered yet.\n";
                } else {
                    cout << "\n--- Available Courses ---\n";
                    for(int i = 0; i < courseCount; i++) {
                        cout << i + 1 << ". " << courses[i] << endl;
                    }
                }
            } 
            else if(choice == 5) {
                cout << "Exiting the system. Goodbye!\n";
                break;
            } 
            else {
                cout << "Invalid Choice. Please try again.\n";
            }
        }
    } else {
        cout << "Too many incorrect attempts. Access Denied.\n";
    }

    return 0;
}