// �����ε� : ������ �̸� ���������� �ٸ� ������ �ϰ� ����� ��
// �����ε� : ����Ÿ��, �Ķ������ ������ Ÿ�Կ� ���� �Լ��� ������ �� �ִ�.
// -> Ŭ���� ���ο����� �����ϰ� ����ȴ�. 
// ������(�Լ����) -> Ŭ������ �������� �����ڸ� ���� �� �ִ�.

#include <cstdio>

int sum(int a, int b) {
	return a + b;
}

double sum(int a, double b) {
	return a + b;
}

int sum(int a, int b,int c) {
	return a + b + c;
}

int main() {

	int rs = sum(10, 20);

	printf("rs : %d\n", rs);

	double rs2 = sum(10, 20.0);

	printf("rs2 : %f\n", rs2);

	rs = sum(10, 20,30);

	printf("rs : %d\n", rs);

	return 0;
}