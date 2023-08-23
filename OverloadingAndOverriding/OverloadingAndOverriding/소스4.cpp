#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>
// 오버라이딩 : 부모클래스의 특정 함수를 자식클래스에서 재정의 하는 것

class Animal {
public:
	int legs;
	char name[20];

	Animal(int legs, const char* name) {
		this->legs = legs;
		strcpy(this->name, name);
	}
	void printInfo() {
		printf("다리 몇 개? : %d\n", legs);
		printf("이름 : %s\n", name);
	}
};

class Person :public Animal{
public:

	char regist_number[40];

	Person(const char* regist_number) : Animal(2,"사람") {
		strcpy(this->regist_number, regist_number);
	}

	void printInfo() {
		printf("다리 몇 개? : %d\n", legs);
		printf("이름 : %s\n", name);
		printf("주민번호 : %s\n", regist_number);
	}
};


int main() {

	Person* p = new Person("123-456");
	p->printInfo();

	return 0;
}