#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>

int number_count = 1;

class Empoloyee {
public:
	int number;
	//char name[100];
	char* name;
	int gender;
	//char rank[100];
	char* rank;

	Empoloyee(char* name, int gender, char* rank) {
		this->name = new char[strlen(name) + 1]; // 널문자까지
		this->rank = new char[strlen(rank) + 1];
		strcpy(this->name, name);
		this->gender = gender;
		strcpy(this->rank, rank);
		this->number = number_count;

		number_count++;
	}

	~Empoloyee() {
		delete[] name; 
		delete[] rank;
	}

	void printInfo() {
		printf("사원번호 : %d\n", number);
		printf("이름 : %s\n", name);
		printf("성별 : %s\n", gender == 0 ? "남자" : "여자");
		printf("직급 : %s\n", rank);
	}
};

int getInt(const char* prompt);

char* getString(const char* prompt);