// Ŭ���� ������ / �Ҹ���
//#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable: 4996)

#include <cstdio>
#include <cstring>

class Student {
public: 
	int student_no;
	char name[100];
	int gender; // 0 - ��, 1 - ��

	void printInfo() {
		printf("�й� : %d\n", student_no);
		printf("�̸� : %s\n", name);
		printf("���� : %s\n", gender == 0 ? "����" : "����"); 
		printf("============\n");                            
	}
};

int main() {
	
	Student* s1 = new Student();
	s1->student_no = 11;
	strcpy(s1->name, "��ö��");
	s1->gender = 0;

	s1->printInfo();

	Student* s2 = new Student();
	s2->student_no = 12;
	strcpy(s2->name, "�迵��");
	s2->gender = 1;

	s2->printInfo();

	return 0;
}