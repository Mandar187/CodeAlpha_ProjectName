#include <iostream>
using namespace std;

int main() {
    int numberOfCourses;
    float grade, cgpa;
    int credit;
    float totalGradePoints = 0;
    int totalCredits = 0;

    // Ask user how many courses they have
    cout << "How many subjects have you ? ";
    cin >> numberOfCourses;

    // Loop through each course
    for (int i = 1; i <= numberOfCourses; i++) {
        cout << "\nSubject " << i << ":\n";

        // Ask for grade
        cout << "Enter your grade (out of 10): ";
        cin >> grade;

        // Ask for credit hours
        cout << "Enter credit of this subject: ";
        cin >> credit;

        // Calculate grade points
        totalGradePoints = totalGradePoints + (grade * credit);

        // Add to total credits
        totalCredits = totalCredits + credit;
    }

    // Calculate CGPA
    cgpa = totalGradePoints / totalCredits;

    // Show final result
    cout << "\nYour CGPA is: " << cgpa << endl;

    return 0;
}
