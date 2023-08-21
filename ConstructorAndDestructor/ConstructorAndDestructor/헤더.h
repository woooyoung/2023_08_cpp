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
		printf("사원번호 : %d\n", number);
		printf("이름 : %s\n", name);
		printf("성별 : %s\n", gender == 0 ? "남자" : "여자");
		printf("직급 : %s\n", rank);
	}
};

int getInt(const char* prompt);

char* getString(const char* prompt);