#include <iostream>
#include <string>
using namespace std;

// Function to calculate total marks
int getTotal(int marks[], int size)
{
    int total = 0;

    for (int i = 0; i < size; i++)
    {
        total = total + marks[i];
    }

    return total;
}

// Function to check pass or fail
void checkResult(float average)
{
    if (average >= 50)
    {
        cout << "\033[32m";
        cout << "Status  : PASS" << endl;
        cout << "\033[0m";
    }
    else
    {
        cout << "\033[31m";
        cout << "Status  : FAIL" << endl;
        cout << "\033[0m";
    }
}

int main()
{
    int students;

    cout << "===== Student Result Management System =====" << endl;

    // Ask user for number of students
    cout << "Enter number of students: ";
    cin >> students;

    // Loop for multiple students
    for (int i = 1; i <= students; i++)
    {
        string name;
        int marks[3];

        cout << "\nStudent " << i << endl;

        // Input student name
        cout << "Enter student name: ";
        cin >> name;

        // Input marks for 3 subjects
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter marks for subject " << j + 1 << ": ";
            cin >> marks[j];
        }

        // Calculate total using function
        int total = getTotal(marks, 3);

        // Calculate average
        float average = total / 3.0;

        // Display results
        cout << "\n----- Result -----" << endl;
        cout << "Name    : " << name << endl;
        cout << "Total   : " << total << endl;
        cout << "Average : " << average << endl;

        // Function call for pass/fail
        checkResult(average);

        cout << "------------------" << endl;
    }

    return 0;
}