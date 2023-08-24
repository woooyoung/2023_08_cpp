#include <cstdio>
// 비트와이즈 연산 -> 비트를 기준으로 연산 -> 기계의 근본에 해당하는 연산
// Bitwise or -> |
// Bitwise and -> &
// Shift <<  >>

// 연산 속도(빠른순으로) : 더하기 빼기 곱하기 나누기 
//                     : 정수연산 실수연산

// 카테고리 분류

void exam1(int params) {
	int category1 = 1; // 1
	int category2 = 1 << 1; //2
	int category3 = 1 << 2; // 4

	if ((category1 & params) != 0) {
		printf("카테고리 1 에 포함됨\n");
	}

	if ((category2 & params) != 0) {
		printf("카테고리 2 에 포함됨\n");
	}

	if ((category3 & params) != 0) {
		printf("카테고리 3 에 포함됨\n");
	}
}


int main() {

	int mario_category = 8 + 4 + 2 + 1;

	int enemy_category = 0 + 4 + 2 + 1;

	int turtle_category = 0 + 0 + 2 + 1;

	int structure_category = 0 + 4 + 0 + 0;

	exam1(1 | 2 | 4);
	exam1(structure_category);


	int v1 = 1; // 0001
	int v2 = 3; // 0011

	int bitwise_or = v1 | v2;
	printf("v1 | v2 : %d\n", bitwise_or);

	int bitwise_and = v1 & v2;
	printf("v1 & v2 : %d\n", bitwise_and);

	int shift_left = v2 << 1; // 0110
	printf("v2 << 1 : %d\n", shift_left);

	int shift_right = v2 >> 1; // 0001
	printf("v2 >> 1 : %d\n", shift_right);

	//int v3 = 1; // 0001
	//int v4 = 2; // 0010

	//int bitwise_or2 = v3 | v4;
	//printf("%d\n", bitwise_or2);

	//int bitwise_and2 = v3 & v4;
	//printf("%d\n", bitwise_and2);



	return 0;
}