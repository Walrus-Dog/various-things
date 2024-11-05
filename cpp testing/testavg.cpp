#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    string name, nameFirst, nameLast;
    int numQuestions, numCorrect;
    double percentage;

    // Get student's test data
    cout << "Enter student's first and last name: ";
    cin >> nameFirst >> nameLast;
    // WRITE A STATEMENT TO READ THE WHOLE NAME INTO THE name VARIABLE.
    name = nameFirst + " " + nameLast;

    cout << "Number of questions on the test: ";
    cin >> numQuestions;
    cout << "Number of answers the student got correct: ";
    cin >> numCorrect;

    // Compute and display the student's % correct
    // WRITE A STATEMENT TO COMPUTE THE % AND ASSIGN THE RESULT TO percentage.
    percentage = static_cast<double>(numCorrect) / numQuestions * 100;

    // WRITE STATEMENTS TO DISPLAY THE STUDENT'S NAME AND THEIR TEST 
    // PERCENTAGE WITH ONE DECIMAL POINT. 
    cout << "\nAverage is: " << name << " " << fixed << showpoint << setprecision(1) << percentage << "%" << endl;

    return 0;
}