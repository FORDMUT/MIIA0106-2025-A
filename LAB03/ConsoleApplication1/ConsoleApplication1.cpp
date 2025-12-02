#include <iostream>
#include <string>
using namespace std;

int main() {
    string studentId;
    string name;
    int score;
    string grade;

  
    cout << "Enter student ID: ";
    cin >> studentId;

    
    cin.ignore();

    cout << "Enter student name: ";
    getline(cin, name); 

    cout << "Enter score: ";
    cin >> score;

    
    if (score >= 90) {
        grade = "A";
    }
    else if (score >= 80) {
        grade = "B";
    }
    else if (score >= 70) {
        grade = "C";
    }
    else if (score >= 60) {
        grade = "D";
    }
    else {
        grade = "F";
    }

    
    cout << endl;
    cout << "----- Student Report -----" << endl;
    cout << "Student ID : " << studentId << endl;
    cout << "Name       : " << name << endl;
    cout << "Score      : " << score << endl;
    cout << "Grade      : " << grade << endl;
    cout << "--------------------------" << endl;

    return 0;
}