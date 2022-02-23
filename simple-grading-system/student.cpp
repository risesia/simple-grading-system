#include "student.h"
#define ARRAY_MAX 100

// string student[] = { "" };

string student::inputStudent(string studentName, int countStudent)
{
    string studentArr[ARRAY_MAX] = { "" };
    // string** student[ARRAY_MAX] = new string*[ARRAY_MAX];

    studentArr[countStudent] = studentName;

    return string();
}

/*
string student::outputStudent(int countStudentScore)
{
    cout << studentArr[countStudentScore];
    return string();
}
*/



