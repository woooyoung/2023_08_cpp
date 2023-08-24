#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>
#include <iostream>


int main() {

	std::string str1 = "apple";
	std::string str2 = "banana";

	if (strcmp(str1.c_str(),str2.c_str()) == 0 ){
		printf("같아");
	}
	else {
		printf("달라");
	}

	/*if (str1.compare(str2) == 0) {
		printf("같아n");
	}
	else {
		printf("달라");
	}*/

	return 0;
}