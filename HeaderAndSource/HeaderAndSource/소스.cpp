#include "Çì´õ.h"

int main() {

	int val1 = 100;
	int val2 = 200;

	int rs = plus(val1, val2);
	printf("rs : %d\n", rs);

	struct Person p1;
	p1.age = 22;
	printf("p1.age : %d\n", p1.age);

	/*printf("%f\n", pow((2.0), 10));

	printf("%f\n", sin(1));

	srand(time(0));
	printf("%d\n", rand() % 100);

	int k = plus(10, 20);
	printf("%d\n", k);*/

	return 0;
}

int plus(int a, int b) {
	return a + b;
}