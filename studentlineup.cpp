/* Program name: studentlineup.cpp
* Programmer: Christopher Hicks
* Date 4/26
* Requirements: Write a program that prompts the user to enter the number of students in a line followed by their names. The program will output who is in the front and back of the lime when sorted alphabetically.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    int number;

    // Input validation
    do {
        cout << "Enter number of students (1-25): ";
        cin >> number;

        if (number < 1 || number > 25) {
            cout << "Invalid input. Try again.\n";
        }
    } while (number < 1 || number > 25);

    cin.ignore();

    string name, frontName, endName;

    cout << "Enter student name 1: ";
    getline(cin, name);

    frontName = name;
    endName = name;

    // Read remaining names
    for (int i = 2; i <= number; i++) {
        cout << "Enter student name " << i << ": ";
        getline(cin, name);

        if (name < frontName) {
            frontName = name;
        }
        if (name > endName) {
            endName = name;
        }
    }

    // results
    cout << "\nFront of the line: " << frontName << endl;
    cout << "End of the line: " << endName << endl;

    return 0;
}