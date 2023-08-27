#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    cout<<"=============================================================================================================================================="<<endl;
    cout<<"\t\t\t\t\t\t\t Student Grading System" << endl;
    cout<<"==============================================================================================================================================" <<endl;

    vector<string> studentNames;
    vector<double> grades;
    string name;
    double grade;
    char continueInput;

    do {
        cout << "Enter student name: ";
        cin >> name; 
        studentNames.push_back(name);

        cout << "Enter grade for " << name << ": ";
        cin >> grade;
        grades.push_back(grade);

        cout << "Do you want to enter another student's information? (y/n): ";
        cin >> continueInput;
    } while (continueInput == 'y' || continueInput == 'Y');

    double totalGrades = 0;
    double highestGrade = grades[0];
    double lowestGrade = grades[0];

    for (double grade : grades) {
        totalGrades += grade;
        if (grade > highestGrade) {
            highestGrade = grade;
        }
        if (grade < lowestGrade) {
            lowestGrade = grade;
        }
    }

    double averageGrade = totalGrades / grades.size();

    cout<<"\n";
    cout << "----------------------";
    cout << "\nStudent Grades Summary\n";
    cout << "----------------------\n";

    for (size_t i = 0; i < studentNames.size(); ++i) {
        cout << studentNames[i] << ": " << grades[i] << endl;
    }

    cout << "\nAverage Grade: " << averageGrade << endl;
    cout << "Highest Grade: " << highestGrade << endl;
    cout << "Lowest Grade: " << lowestGrade << endl;
    cout<<"\n";

    return 0;
}
