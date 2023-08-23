#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>
// �������̵� : �θ�Ŭ������ Ư�� �Լ��� �ڽ�Ŭ�������� ������ �ϴ� ��

class Animal {
public:
	int legs;
	char name[20];

	Animal(int legs, const char* name) {
		this->legs = legs;
		strcpy(this->name, name);
	}
	void printInfo() {
		printf("�ٸ� �� ��? : %d\n", legs);
		printf("�̸� : %s\n", name);
	}
};

class Person :public Animal{
public:

	char regist_number[40];

	Person(const char* regist_number) : Animal(2,"���") {
		strcpy(this->regist_number, regist_number);
	}

	void printInfo() {
		printf("�ٸ� �� ��? : %d\n", legs);
		printf("�̸� : %s\n", name);
		printf("�ֹι�ȣ : %s\n", regist_number);
	}
};


int main() {

	Person* p = new Person("123-456");
	p->printInfo();

	return 0;
}