// 오버로드 : 동일한 이름 갖고있지만 다른 동작을 하게 만드는 것
// 오버로딩 : 리턴타입, 파라미터의 갯수와 타입에 따라서 함수를 구분할 수 있다.
// -> 클래스 내부에서도 동일하게 적용된다. 
// 생성자(함수취급) -> 클래스가 여러개의 생성자를 가질 수 있다.

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