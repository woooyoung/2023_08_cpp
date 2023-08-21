// 클래스 생성자 / 소멸자
#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cstring>

class Student {
public:
	int student_no;
	char name[100];
	int gender; // 0 - 남, 1 - 여

	Student(int StdNo, const char* n, int g) { // 생성자
		printf("생성자 실행됨\n");
		student_no = StdNo;
		strcpy(name, n);
		gender = g;
	}

	void printInfo() {
		printf("학번 : %d\n", student_no);
		printf("이름 : %s\n", name);
		printf("성별 : %s\n", gender == 0 ? "남자" : "여자");
		printf("============\n");
	}
};

int main() {

	Student* s1 = new Student(11, "김철수", 0);
	/*s1->student_no = 11;
	strcpy(s1->name, "김철수");
	s1->gender = 0;*/

	s1->printInfo();

	delete s1;

	return 0;
}