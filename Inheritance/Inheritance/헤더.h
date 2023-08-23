#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <ctime>

class Unit { // �θ� Ŭ������ �����ڸ� ����ߴ�
public:
	int maxHp;
	int atk_point;
	int range;
	int movementSpeed;

	Unit(int maxHp, int atk_point, int range, int movementSpeed) {
		this->maxHp = maxHp;
		this->atk_point = atk_point;
		this->range = range;
		this->movementSpeed = movementSpeed;
	}

	char name[50];

	void printInfo() {
		printf("%s�� �Ӽ�\n", name);
		printf("�ִ�ü�� : %d\n", maxHp);
		printf("���ݷ� : %d\n", atk_point);
		printf("�����Ÿ� : %d\n", range);
		printf("�̵��ӵ� : %d\n", movementSpeed);
		printf("\n");
	}
};

class Goblin : public Unit {
public:
	Goblin() : Unit(60, 5, 10, 10) {

		strcpy(name, "���");
	}
};

class Orc : public Unit {
public:
	Orc() : Unit(80, 10, 12, 8) {

		strcpy(name, "��ũ");
	}
};

class Slime : public Unit {
public:
	Slime() : Unit(100, 3, 5, 4) {

		strcpy(name, "������");
	}
};

class SkeletonArcher : public Unit {
public:
	SkeletonArcher() : Unit(60, 20, 50, 3) {

		strcpy(name, "�ذ�ü�");
	}
};
