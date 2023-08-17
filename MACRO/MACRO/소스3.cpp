#include <cstdio>

//#define EXECUTE_NUM 0
#define EXECUTE_NUM 

//#if EXECUTE_NUM == 0
//#ifdef EXECUTE_NUM
#ifndef EXECUTE_NUM
int main() {

	printf("Hi 1\n");

	return 0;
}
#else
int main() {

	printf("Hi 2\n");

	return 0;
}
#endif
