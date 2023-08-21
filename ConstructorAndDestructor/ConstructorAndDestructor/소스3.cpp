// 클래스 생성자 / 소멸자
#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cstring>

class Student {
public:
	int student_no;
	char name[100];
	int gender; // 0 - 남, 1 - 여
	int age;

	void printInfo() {
		printf("학번 : %d\n", student_no);
		printf("이름 : %s\n", name);
		printf("성별 : %s\n", gender == 0 ? "남자" : "여자");
		printf("나이 : %d\n", age);
		printf("============\n");
	}
};

int main() {

	Student* s1 = new Student();
	s1->student_no = 11;
	strcpy(s1->name, "김철수");
	s1->gender = 0;
	s1->age = 17;

	s1->printInfo();

	delete s1;

	Student* s2 = new Student();
	s2->student_no = 12;
	strcpy(s2->name, "김영희");
	s2->gender = 1;
	s2->age = 17;

	s2->printInfo();

	delete s2;

	Student* s3 = new Student();
	s3->student_no = 13;
	strcpy(s3->name, "김민수");
	s3->gender = 1;
	s3->age = 17;

	s3->printInfo();

	delete s3;

	return 0;
}