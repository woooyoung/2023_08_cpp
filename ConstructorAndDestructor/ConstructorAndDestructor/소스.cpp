// Ŭ���� ������ / �Ҹ���
//#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable: 4996)

#include <cstdio>
#include <cstring>
//struct Student {
//};

class Student {
public: // Ŭ���� ���� ������ Ŭ���� �ܺο��� ������ �� �ֵ��� �ϱ� ����
	int student_no;
	char name[100];
	int gender; // 0 - ��, 1 - ��

	void printInfo() {
		printf("�й� : %d\n", student_no);
		printf("�̸� : %s\n", name);
		printf("���� : %s\n", gender == 0 ? "����" : "����"); // �ζ��� ������
		printf("============\n");                            // <������> ? ��1 : ��2
	}
};

int main() {
	int a = 10;
	Student s1;
	s1.student_no = 11;
	strcpy(s1.name, "��ö��");
	s1.gender = 0;

	s1.printInfo();

	Student s2;
	s2.student_no = 12;
	strcpy(s2.name, "�迵��");
	s2.gender = 1;

	s2.printInfo();

	return 0;
}