// 클래스 생성자 / 소멸자
//#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable: 4996)

#include <cstdio>
#include <cstring>

class Student {
public: 
	int student_no;
	char name[100];
	int gender; // 0 - 남, 1 - 여

	void printInfo() {
		printf("학번 : %d\n", student_no);
		printf("이름 : %s\n", name);
		printf("성별 : %s\n", gender == 0 ? "남자" : "여자"); 
		printf("============\n");                            
	}
};

int main() {
	
	Student* s1 = new Student();
	s1->student_no = 11;
	strcpy(s1->name, "김철수");
	s1->gender = 0;

	s1->printInfo();

	Student* s2 = new Student();
	s2->student_no = 12;
	strcpy(s2->name, "김영희");
	s2->gender = 1;

	s2->printInfo();

	return 0;
}