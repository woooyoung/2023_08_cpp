#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <ctime>

class Unit {
public:
	int maxHp;
	int atk_point;
	int range;
	int movementSpeed;

	char name[50];

	void printInfo() {
		printf("%s의 속성\n", name);
		printf("최대체력 : %d\n", maxHp);
		printf("공격력 : %d\n", atk_point);
		printf("사정거리 : %d\n", range);
		printf("이동속도 : %d\n", movementSpeed);
		printf("\n");
	}
};

class Goblin : public Unit {
public:
	Goblin() {
		maxHp = 60;
		atk_point = 5;
		range = 10;
		movementSpeed = 10;

		strcpy(name, "고블린");

	}
	void printInfo() {
		printf("%s의 속성\n", name);
		printf("최대체력 : %d\n", maxHp);
		printf("공격력 : %d\n", atk_point);
		printf("사정거리 : %d\n", range);
		printf("이동속도 : %d\n", movementSpeed);
	}
};

class Orc : public Unit {
public:
	Orc() {
		maxHp = 80;
		atk_point = 10;
		range = 12;
		movementSpeed = 8;

		strcpy(name, "오크");
	}
	void printInfo() {
		printf("%s의 속성\n", name);
		printf("최대체력 : %d\n", maxHp);
		printf("공격력 : %d\n", atk_point);
		printf("사정거리 : %d\n", range);
		printf("이동속도 : %d\n", movementSpeed);
	}
};

class Slime : public Unit {
public:
	Slime() {
		maxHp = 100;
		atk_point = 3;
		range = 5;
		movementSpeed = 4;

		strcpy(name, "슬라임");
	}
	void printInfo() {
		printf("%s의 속성\n", name);
		printf("최대체력 : %d\n", maxHp);
		printf("공격력 : %d\n", atk_point);
		printf("사정거리 : %d\n", range);
		printf("이동속도 : %d\n", movementSpeed);
	}
};

class SkeletonArcher : public Unit {
public:
	SkeletonArcher() {
		maxHp = 60;
		atk_point = 20;
		range = 50;
		movementSpeed = 3;

		strcpy(name, "해골궁수");
	}
	void printInfo() {
		printf("%s의 속성\n", name);
		printf("최대체력 : %d\n", maxHp);
		printf("공격력 : %d\n", atk_point);
		printf("사정거리 : %d\n", range);
		printf("이동속도 : %d\n", movementSpeed);
	}
};