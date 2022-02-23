#pragma once
#include <iostream>
#define ARRAY_MAX 100

using namespace std;

class score
{
public:
	int inputScore(int countStudentScore, int countCourseScore, int studentCourseScore);
	int scoreArr[ARRAY_MAX][ARRAY_MAX];
};

