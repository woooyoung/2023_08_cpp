// 상속(inheritance) -> 물려받다

#include <cstdio>

struct Animal {
	int age = 15;
	int legs = 0;
	int arms = 0;
};

struct Person : public Animal{
	//int age = 10;
	Person() {
		int age = 10;
		int legs = 2;
		int arms = 2;
	}
}; 

struct Dog : public Animal {
	Dog() {
		int legs = 4;
		int arms = 0;
	}
};


int main() {

	Person p1;
	printf("p1.age : %d\n", p1.age);

	Dog d1;
	printf("d1.age : %d\n", d1.age);

	return 0;
}