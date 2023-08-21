// 클래스 생성자 / 소멸자
#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cstdlib>

int main() {

	int arr[20];

	int* arr2 = (int*)malloc(sizeof(int) * 20);

	//free(arr2);

	int* arr3 = new int[20];

	//delete arr3;

	return 0;
}