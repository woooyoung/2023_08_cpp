// Ŭ���� ������ / �Ҹ���
#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cstring>

class Student {
public:
	int student_no;
	char name[100];
	int gender; // 0 - ��, 1 - ��
	int age;

	void printInfo() {
		printf("�й� : %d\n", student_no);
		printf("�̸� : %s\n", name);
		printf("���� : %s\n", gender == 0 ? "����" : "����");
		printf("���� : %d\n", age);
		printf("============\n");
	}
};

int main() {

	Student* s1 = new Student();
	s1->student_no = 11;
	strcpy(s1->name, "��ö��");
	s1->gender = 0;
	s1->age = 17;

	s1->printInfo();

	delete s1;

	Student* s2 = new Student();
	s2->student_no = 12;
	strcpy(s2->name, "�迵��");
	s2->gender = 1;
	s2->age = 17;

	s2->printInfo();

	delete s2;

	Student* s3 = new Student();
	s3->student_no = 13;
	strcpy(s3->name, "��μ�");
	s3->gender = 1;
	s3->age = 17;

	s3->printInfo();

	delete s3;

	return 0;
}