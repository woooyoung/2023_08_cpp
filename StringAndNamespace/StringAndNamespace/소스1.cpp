// std string -> const char* , char*  // 배열 형태의 문자열을 할당받을 수 있다
// 덧셈 기호를 이용해서 문자열을 이어 붙이기가 가능하다
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <string>
#include <iostream>

// std::string 은 사용자가 메모리관리, 배열 관리를 하지 않고 편하게 쓸려고 만들었음.

int main() {

	std::string myStr = "Hello World!";
	myStr = myStr + "Hello C++";
	printf("%s\n", myStr.c_str());

	//std::string* myStrPointer; // 위의 이유로 만들었는데 동적할당????

	//std::cout << myStr;

	return 0;
}