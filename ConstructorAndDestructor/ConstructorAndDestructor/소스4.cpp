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

	Student(int StdNo, const char* n, int g) { // 생성자 : 생성되자마자 파라미터를 이용해서 값을 초기화 해 넣어준다.
		printf("생성자 실행됨\n");
		this->student_no = StdNo;
		strcpy(this->name, n);
		this->gender = g;
		this->age = 17;
	}

	~Student() { // 소멸자 : 클래스 인스턴스가 파괴될 때 -> 메모리에서 해제될 때
		printf("%s 소멸자 실행됨\n", this->name);
	}

	void printInfo() {
		printf("학번 : %d\n", student_no);
		printf("이름 : %s\n", name);
		printf("성별 : %s\n", gender == 0 ? "남자" : "여자");
		printf("나이 : %d\n", age);
		printf("============\n");
	}
};

int main() {

	Student* s1 = new Student(11, "김철수",0);
	s1->printInfo();

	delete s1;

	Student* s2 = new Student(12, "김영희", 1);
	s2->printInfo();

	delete s2;

	Student s3 = Student(13, "김민수", 0);
	s3.printInfo();


	return 0;
}