//namespace
#include <cstdio>

namespace kim {
	void exam1() {
		printf("梯繹熱陛 虜萇 л熱\n");
	}
	class Person {
	public:
		Person() {
			printf("梯繹熱 \n");
		}
	};
}
namespace park {
	void exam1() {
		printf("夢團熱陛 虜萇 л熱\n");
	}
	class Person {
	public:
		Person() {
			printf("夢團熱 \n");
		}
	};
}

int main() {

	kim::exam1();

	//kim::Person 

	return 0;
}