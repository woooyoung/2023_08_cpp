// 정수 다섯개의 평균을 구하는 매크로 구현

#include <cstdio>

//구현 시작
#define AVG(A, B, C, D, E) (A + B + C + D + E) / 5
//구현 끝

int main() {

	int result = 0;

	//구현 시작
	result = AVG(111, 22, 3345, 42, 57);
	//구현 끝

	printf("result : %d\n", result);

	return 0;
}