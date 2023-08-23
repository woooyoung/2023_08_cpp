#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cstring>

class Student {
public:
	int student_number;
	char student_name[100];

	Student() {
		student_number = 0;
		strcpy(student_name, "��ö��");
	}

	Student(int studentNO, const char* studentName) {
		this->student_number = studentNO;
		strcpy(this->student_name, studentName);
	}

	void printInfo() {
		printf("%s �л��� �й� : %d\n", student_name, student_number);
	}
};

int main() {

	Student* s1 = new Student();
	s1->printInfo();

	Student* s2 = new Student(10,"�迵��");
	s2->printInfo();

	return 0;
}