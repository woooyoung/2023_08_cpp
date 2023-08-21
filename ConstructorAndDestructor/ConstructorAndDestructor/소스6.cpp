// Ŭ���� ������ / �Ҹ���
#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cstring>

class Student {
public:
	//char name[100];
	char* name;

	Student(const char* n) { 
		printf("������ �����\n");
		name = new char[strlen(n) + 1];
		strcpy(this->name, n);
	}

	~Student() { 
		printf("%s �Ҹ��� �����\n", this->name);
		delete[] name;
	}

	void printInfo() {
		printf("�̸� : %s\n", name);
		printf("============\n");
	}
};

int main() {

	Student* s1 = new Student("��ö��");
	s1->printInfo();

	delete s1;

	Student* s2 = new Student("�迵��");
	s2->printInfo();

	delete s2;

	Student s3 = Student("��μ�");
	s3.printInfo();


	return 0;
}