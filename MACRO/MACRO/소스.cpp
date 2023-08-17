#include <cstdio>

int main() {

	int v1 = 100;
	int v2 = 200;
	int temp;

	printf("v1 : %d\n", v1);
	printf("v2 : %d\n", v2);

	temp = v1;
	v1 = v2;
	v2 = temp;

	printf("v1 : %d\n", v1);
	printf("v2 : %d\n", v2);

	return 0;
}