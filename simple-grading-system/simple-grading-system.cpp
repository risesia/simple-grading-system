// simple-grading-system.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <stdlib.h>
#include "student.h"
#include "course.h"
#include "score.h"
#define ARRAY_MAX 100

using namespace std;

int main()
{
	// declare var
	int sumStudent = 0;
	int sumCourse = 0;
	// int sumScore = 0;
	string studentName = "";
	string courseName = "";
	int studentCourseScore = 0;
	int countStudent = 0;
	int countCourse = 0;
	int countStudentScore = 0;
	int countCourseScore = 0;

	// class declaration
	/*
	class student {
	public:
		string studentArr[ARRAY_MAX];
	};
	*/

	cout << "Simple Grading System\n" << endl;

	// ask for students and courses
	cout << "Enter number of students enrolled:" << endl;
	cin >> sumStudent;
	system("cls");

	cout << "Enter number of courses available:" << endl;
	cin >> sumCourse;
	system("cls");

	// ask for student names
	student s;
	for (sumStudent; sumStudent > 0; sumStudent -= 1, countStudent++) {
		cout << "Enter student name: " << endl;
		getline(cin >> ws, studentName);
		s.inputStudent(studentName, countStudent);
		system("cls");
		cout << "Student input success!" << endl;
	}

	// ask for course names
	course c;
	for (sumCourse; sumCourse > 0; sumCourse -= 1, countCourse++) {
		cout << "Enter course name: " << endl;
		getline(cin >> ws, courseName);
		c.inputCourse(courseName, countCourse);
		system("cls");
		cout << "Course input success!\n" << endl;
	}

	// ask for course score
	score e{};
	for (sumStudent; sumStudent > 0; sumStudent -= 1, countStudentScore++) {
		cout << "Student name: ";
		cout << s.studentArr[countStudentScore];

		for (sumCourse; sumCourse > 0; sumCourse -= 1, countCourseScore++) {
			cout << "\nCourse name: ";
			cout << c.courseArr[countCourseScore++];
			cout << "\nScore: ";
			cin >> studentCourseScore;
			e.inputScore(countStudentScore, countCourseScore, studentCourseScore);
		}
		system("cls");
	}

	// report
	cout << "REPORT";
	for (sumStudent; sumStudent > 0; sumStudent -= 1, countStudentScore++) {
		cout << "Student name: ";
		cout << s.studentArr[countStudentScore];
		for (sumCourse; sumCourse > 0; sumCourse -= 1, countCourseScore++) {
			cout << "\nCourse name: ";
			cout << c.courseArr[countCourseScore++];
			cout << e.scoreArr[countStudentScore][countCourseScore];
		}
	}
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
