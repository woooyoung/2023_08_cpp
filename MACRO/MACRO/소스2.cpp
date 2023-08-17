#include <cstdio>

#define SWAP(X, Y, T) T = X; X = Y; Y = T;

#define P(X,Y) X##Y

#define PI 3.141592

int main() {

	float pi = PI;

	P(print, f("Hello World!\n"));

	return 0;
}