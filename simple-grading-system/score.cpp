#include "score.h"
#define ARRAY_MAX 100


int score::inputScore(int countStudentScore, int countCourseScore, int studentCourseScore)
{
	int scoreArr[ARRAY_MAX][ARRAY_MAX] = { { 0 } };

	scoreArr[countStudentScore][countCourseScore] = studentCourseScore;
	return 0;
}
