#pragma once
struct Student {
	int ID;
	int ExamScore;
	int Course;
};

void printStudent(Student studentA);
void studentAnalytics(Student students[], int numbStud, int course);
float avgTest(Student students[], int numbStud);
float medianScore(Student students[], int numbStud);
int courseEnrollment(Student students[], int numbStud, int course);
