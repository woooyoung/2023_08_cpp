#define _CRT_SECURE_NO_WARNINGS
// 상속 -> 어떤 개념을 확장해서 더 디테일한 하위 개념을 만든다. 부모클래스, 자식클래스/ 동물 사람 강아지
// 상속해주는 클래스의 변수, 함수를 외부에서도 쓸 수 있다.
// 접근지정자 : public, protected, private
#include <cstdio>
#include <cstring>
#include <cstdlib>

class Animal {
public: // 누구나 접근 가능
	int legs;
	char name[50];
//protected: // 부모자식간에만 접근 가능, 외부에서는 접근불가, 내부에서는 접근가능
	Animal(int legs, const char* name) {
		printf("동물 생성자 실행\n");
		this->legs = legs;
		strcpy(this->name, name);
	}
//private: // 해당 클래스 내부 외에는 접근 불가, 상속관계에서도 불가능
	void printInfo() {
		printf("다리의 갯수 : %d\n", legs);
		printf("이름 : %s\n", name);
	}
};

class Dog : public Animal {
public:
	Dog() : Animal(4, "강아지") {
		printf("강아지 생성자 실행\n");
	}
};

// 속성과 기능은 자식클래스가 부모클래스보다 같거나 더 많다.
class Person : public Animal{
public:
	char regist_number[30];

	Person(const char* regist_number) : Animal(2,"사람") {
		printf("사람 생성자 실행\n");
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