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

	Student(int StdNo, const char* n, int g) { // ������ : �������ڸ��� �Ķ���͸� �̿��ؼ� ���� �ʱ�ȭ �� �־��ش�.
		printf("������ �����\n");
		this->student_no = StdNo;
		strcpy(this->name, n);
		this->gender = g;
		this->age = 17;
	}

	~Student() { // �Ҹ��� : Ŭ���� �ν��Ͻ��� �ı��� �� -> �޸𸮿��� ������ ��
		printf("%s �Ҹ��� �����\n", this->name);
	}

	void printInfo() {
		printf("�й� : %d\n", student_no);
		printf("�̸� : %s\n", name);
		printf("���� : %s\n", gender == 0 ? "����" : "����");
		printf("���� : %d\n", age);
		printf("============\n");
	}
};

int main() {

	Student* s1 = new Student(11, "��ö��",0);
	s1->printInfo();

	delete s1;

	Student* s2 = new Student(12, "�迵��", 1);
	s2->printInfo();

	delete s2;

	Student s3 = Student(13, "��μ�", 0);
	s3.printInfo();


	return 0;
}