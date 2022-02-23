#pragma once
#include <string>
#include <iostream>
#define ARRAY_MAX 100

using namespace std;

class student
{
public:
	string inputStudent(string studentName, int countStudent);
	string studentArr[ARRAY_MAX];
//	string outputStudent(int countStudentScore);
};

