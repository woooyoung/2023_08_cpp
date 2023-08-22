#define _CRT_SECURE_NO_WARNINGS
// ��� -> � ������ Ȯ���ؼ� �� �������� ���� ������ �����. �θ�Ŭ����, �ڽ�Ŭ����/ ���� ��� ������
// ������ִ� Ŭ������ ����, �Լ��� �ܺο����� �� �� �ִ�.
// ���������� : public, protected, private
#include <cstdio>
#include <cstring>
#include <cstdlib>

class Animal {
public: // ������ ���� ����
	int legs;
	char name[50];
//protected: // �θ��ڽİ����� ���� ����, �ܺο����� ���ٺҰ�, ���ο����� ���ٰ���
	Animal(int legs, const char* name) {
		printf("���� ������ ����\n");
		this->legs = legs;
		strcpy(this->name, name);
	}
//private: // �ش� Ŭ���� ���� �ܿ��� ���� �Ұ�, ��Ӱ��迡���� �Ұ���
	void printInfo() {
		printf("�ٸ��� ���� : %d\n", legs);
		printf("�̸� : %s\n", name);
	}
};

class Dog : public Animal {
public:
	Dog() : Animal(4, "������") {
		printf("������ ������ ����\n");
	}
};

// �Ӽ��� ����� �ڽ�Ŭ������ �θ�Ŭ�������� ���ų� �� ����.
class Person : public Animal{
public:
	char regist_number[30];

	Person(const char* regist_number) : Animal(2,"���") {
		printf("��� ������ ����\n");
		strcpy(this->regist_number, regist_number);
	}
};

int main() {

	Animal* a;

	Person* p = new Person("1234-5678");
	p->printInfo();
	Dog* d = new Dog();
	d->printInfo();

	a = p;

	a = d;

	p = (Person*)a;
	//d = a;

	/*int i = 10;
	double dd = 22.2;

	dd = i;
	printf("dd : %f", dd);*/

	return 0;

}