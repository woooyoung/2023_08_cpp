#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>

class Empoloyee {
public:
	int number;
	char name[100];
	int gender;
	char rank[100];

	void printInfo() {
		printf("�����ȣ : %d\n", number);
		printf("�̸� : %s\n", name);
		printf("���� : %s\n", gender == 0 ? "����" : "����");
		printf("���� : %s\n", rank);
	}
};

int getInt(const char* prompt);

char* getString(const char* prompt);