//STL (Standard Template Library)
// ������ �ִ��� �ڷ� �̷�� �;�, � �Լ��� ������ ���� �� Ÿ��? �����ϰ� ���� �ʾ�
// Ÿ���� ���� �̸� ������ ���� ��) int a = 10; int b(){return 5.5;}
// -> �ش� Ÿ���� Ư������ �Լ��� ���� Ŭ�����ۿ� �� �����.
// STL -> �̷�� �̷�ٰ� Ÿ���� ����ϱ� ������ �����ҷ�(���뼺�� ��������.)
#include <cstdio>
#include <string>
template <typename T>
class MyClass { // �� Ŭ���� ���ο��� Ÿ���� �������� ���� ���𰡰� �ִ�. -> Ÿ���� ������ ���߿� �ҷ�
public:
	T value;
};

template <typename T>
void swap(T* a, T* b) {
	T temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main() {

	int v1 = 100;
	int v2 = 200;

	swap<int>(&v1, &v2);

	printf("v1 : %d\n", v1);
	printf("v2 : %d\n", v2);

	std::string sv1 = "Hi";
	std::string sv2 = "Bye";

	swap<std::string>(&sv1, &sv2);

	printf("sv1 : %s\n", sv1.c_str());
	printf("sv2 : %s\n", sv2.c_str());

	MyClass<int>* m = new MyClass<int>();
	m->value = 100;

	printf("%d\n", m->value);

	MyClass<std::string>* ms = new MyClass<std::string>();
	ms->value = "�ȳ�";

	printf("%s\n", ms->value.c_str());

	return 0;
}