//namespace
#include <cstdio>

namespace kim {
	void exam1() {
		printf("��ö���� ���� �Լ�\n");
	}
	class Person {
	public:
		Person() {
			printf("��ö�� \n");
		}
	};
}
namespace park {
	void exam1() {
		printf("�ڹμ��� ���� �Լ�\n");
	}
	class Person {
	public:
		Person() {
			printf("�ڹμ� \n");
		}
	};
}

int main() {

	kim::exam1();

	//kim::Person 

	return 0;
}