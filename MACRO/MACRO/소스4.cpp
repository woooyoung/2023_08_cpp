#include <cstdio>

//#define SWAP(X, Y, TYPE) TYPE temp = v1; v1 = v2; v2 = temp;
//#define SWAP(X, Y, TYPE) {TYPE temp = v1; v1 = v2; v2 = temp;} // temp의 유효 범위 지정 -> 스코프 지정
#define SWAP(X, Y, TYPE) TYPE temp = v1; v1 = v2; v2 = temp;

int main() {

	int v1 = 100;
	int v2 = 200;

	printf("==전==\n");
	printf("v1 : %d\n", v1); // 100
	printf("v2 : %d\n", v2); // 200

	{SWAP(v1, v2, int)}
	{SWAP(v1, v2, int)}

	printf("==후==\n");
	printf("v1 : %d\n", v1); // 200
	printf("v2 : %d\n", v2); // 100

	for (int i = 1; i <= 3; i++) {
		printf("i : %d\n", i);
	}

	for (int i = 1; i <= 3; i++) {
		printf("i : %d\n", i);
	}

	return 0;
}