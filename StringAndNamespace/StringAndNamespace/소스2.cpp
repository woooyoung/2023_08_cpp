#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>
#include <iostream>


int main() {

	std::string str1 = "apple";
	std::string str2 = "banana";

	if (strcmp(str1.c_str(),str2.c_str()) == 0 ){
		printf("����");
	}
	else {
		printf("�޶�");
	}

	/*if (str1.compare(str2) == 0) {
		printf("����n");
	}
	else {
		printf("�޶�");
	}*/

	return 0;
}