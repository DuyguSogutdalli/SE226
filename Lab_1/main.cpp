#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string name;
    string studentId;

    cout << "What is your name?" << endl;
    cin >> name;
    cout << "Hello " << name << "." << endl;

    cout << "What is your Student ID? " << endl;
    cin >> studentId;
    cout << "Your ID is " << studentId << "." << endl;

    int number1, number2;

    cout << "Please enter a value for number1: " << endl;
    cin >> number1;

    cout << "Please enter a value for number2: " << endl;
    cin >> number2;

    int sum, diff, prod;

    sum = number1 + number2;
    diff = number1 - number2;
    prod = number1 * number2;

    cout << "----------------VALUES----------------" << endl;
    cout << "Number1: " << number1 << endl;
    cout << "Number2: " << number2 << endl;
    cout << "Sum: " << sum << endl;
    cout << "Diff: " << diff << endl;
    cout << "Prod: " << prod << endl;

    cout << endl;

    string stName;
    int labGrade, mtGrade, finalGrade;

    cout << "Please enter your name: " << endl;
    cin.ignore();
    getline(cin, stName);

    cout << "Please enter your Lab grade: " << endl;
    cin >> labGrade;

    cout << "Please enter your Midterm grade: " << endl;
    cin >> mtGrade;

    cout << "Please enter your Final grade: " << endl;
    cin >> finalGrade;

    cout << "" << endl;

    cout << "Name: " << stName << endl;
    cout << "Lab: " << labGrade << endl;
    cout << "Final: " << finalGrade << endl;
    cout << "Last Score: " << (labGrade * 0.25) + (mtGrade * 0.35) + (finalGrade * 0.40) << endl;

    cout << "" << endl;

    cout << "*" << endl << "**" << endl << "***" << endl << "**" << endl << "*" << endl;


    return 0;
}
