// Ŭ���� ������ / �Ҹ���
#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cstring>

class Student {
public:
	int student_no;
	char name[100];
	int gender; // 0 - ��, 1 - ��

	Student(int StdNo, const char* n, int g) { // ������
		printf("������ �����\n");
		student_no = StdNo;
		strcpy(name, n);
		gender = g;
	}

	void printInfo() {
		printf("�й� : %d\n", student_no);
		printf("�̸� : %s\n", name);
		printf("���� : %s\n", gender == 0 ? "����" : "����");
		printf("============\n");
	}
};

int main() {

	Student* s1 = new Student(11, "��ö��", 0);
	/*s1->student_no = 11;
	strcpy(s1->name, "��ö��");
	s1->gender = 0;*/

	s1->printInfo();

	delete s1;

	return 0;
}