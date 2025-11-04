#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>

using namespace std;

// ENUMERATION 
enum GradeLevel { FRESHMAN = 1, SOPHOMORE, JUNIOR, SENIOR };

// TYPEDEF/USING
using GPA = double; // simplifies data type naming

// NAMESPACE
namespace StudentUtils {

    // Converts a student's name to uppercase
    void formatName(string &name) {
        for (char &c : name) {
            c = toupper(c);
        }
    }

    // Displays formatted student information
    void displayStudentInfo(const string &name, GradeLevel level, GPA gpa) {
        cout << "\nStudent Record:\n";
        cout << "Name: " << name << endl;

        cout << "Grade Level: ";
        switch(level) {
            case FRESHMAN: cout << "Freshman"; break;
            case SOPHOMORE: cout << "Sophomore"; break;
            case JUNIOR: cout << "Junior"; break;
            case SENIOR: cout << "Senior"; break;
        }
        cout << endl;

        // Format GPA to 2 decimal places
        cout << fixed << setprecision(2);
        cout << "GPA: " << gpa << endl;
    }
}

int main() {
    string studentName;
    int gradeInput;
    GPA studentGPA;

    // USER INPUT
    cout << "Enter student name: ";
    getline(cin, studentName);

    cout << "Enter grade level (1=Freshman, 2=Sophomore, 3=Junior, 4=Senior): ";
    cin >> gradeInput;

    cout << "Enter GPA: ";
    cin >> studentGPA;

    // Convert int to enum
    GradeLevel grade = static_cast<GradeLevel>(gradeInput);

    // STRING OPERATIONS
    StudentUtils::formatName(studentName);

    // DISPLAY OUTPUT
    StudentUtils::displayStudentInfo(studentName, grade, studentGPA);

    return 0;
}


