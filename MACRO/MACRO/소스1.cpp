#include <cstdio>

#define SWAP(X, Y, T) T = X; X = Y; Y = T;

int is_even_number(int n) {
	return n % 2 == 0;
}
#define true 1
int main() {

	int rs = is_even_number(3);
	printf("rs : %d\n", rs);

	int v1 = 100;
	int v2 = 200;
	int temp;
	printf("==swap Àü==\n");
	printf("v1 : %d\n", v1); // 100
	printf("v2 : %d\n", v2); // 200

	SWAP(v1, v2, temp)

	printf("==swap ÈÄ==\n");
	printf("v1 : %d\n", v1); // 200
	printf("v2 : %d\n", v2); // 100

	for (int i = 0; i < 5; i++) {
		printf("%d\n", i);
	}
	return 0;
}