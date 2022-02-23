#pragma once
#include <string>
#define ARRAY_MAX 100

using namespace std;

class course
{
public:
	string inputCourse(string courseName, int countCourse);
	string courseArr[ARRAY_MAX];
};

