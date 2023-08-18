// c��  c++�� ����
// c++ �� c�� ��� ������ ��� ��ü������ �߰��ϸ� ����� ���� ����ӵ��� ������

// �Ϲ������� �ٸ� ��ü���� ���� Ŭ������ ������ ���� �� �� ����. -> ��� �Լ��� Ŭ���� ���ο� ����

// c++�� ��ü������ �����ϸ鼭 Ŭ������ ��� ���������� ������ �� �ִ�. (php, js)

#include <iostream>
#include <cstdlib>

struct Person {
	int age;
	int height;
};

int main() {

	struct Person p1;
	p1.age = 22;
	p1.height = 150;

	Person* p2 = (Person*)malloc(sizeof(Person));
	p2->age = 23;
	p2->height = 160;

	Person* p3 = new Person();
	p3->age = 24;
	p3->height = 170;

	free(p2);
	delete(p3);

	int* arr = (int*)malloc(sizeof(int) * 10);
	free(arr);

	int* arr2 = new int[10];
	delete(arr2);

	//printf("Hello World!\n");

	//std::cout << "Hello World!\n";
}