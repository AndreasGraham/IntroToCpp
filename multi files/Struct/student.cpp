#include "student.h"
#include <iostream>

void printStudent(Student studentA) {
	std::cout << "StudentID: " << studentA.ID << std::endl;
	std::cout << "Course: " << studentA.Course << std::endl;
	std::cout << "ExamScore: " << studentA.ExamScore << std::endl;
}

void studentAnalytics(Student students[], int numbStud, int course) {
	avgTest(students, numbStud);
	medianScore(students, numbStud);
	courseEnrollment(students, numbStud, course);
}

float avgTest(Student students[], int numbStud) {
	int total = 0;
	for (int i = 0; i < numbStud; i++) {
		total = total + students[i].ExamScore;
	}
	int avgExamScore = total / numbStud;
	std::cout << "The average exam score is: " << avgExamScore << std::endl;
	return avgExamScore;
}

float medianScore(Student students[], int numbStud) {
	
	float median = 0;
	int myArr[5];
	//populates array with students exam scores
	for (int i = 0; i < numbStud; i++) {
		myArr[i] = students[i].ExamScore;
	}


	// sorts the array from smallest to largest
	for (int j = 0; j < numbStud; j++) {
		for (int i = 0; i < numbStud; i++) {
			if (myArr[i] < myArr[i + 1]) {
				myArr[i] = myArr[i + 1] + myArr[i];
				myArr[i + 1] = myArr[i] - myArr[i + 1];
				myArr[i] = myArr[i] - myArr[i + 1];
			}
		}
	}

	//finds median
	for (int i = 0; i < numbStud; i++) {
		if (numbStud % 2 != 0) {
			median = myArr[(numbStud / 2)];
		}
		else {
			median = (myArr[numbStud/2-1] + myArr[(numbStud/2)])/2;
		}
	}

	std::cout << "The median score is: " << median << std::endl;
	return median;
}

int courseEnrollment(Student students[], int numbStud, int course) {
	int enrollmentNumb = 0;
	
	for (int i = 0; i < numbStud; i++) {
		if (course == students[i].Course) {
			enrollmentNumb++;
		}
	}

	std::cout << "Number enrolled: " << enrollmentNumb << std::endl;
	return enrollmentNumb;
}
