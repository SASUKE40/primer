#include <iostream>
int reused = 42;
int main() {
	int i = 42;
	int* pi = 0;
	int* pi2 = &i;
	int* pi3;
	pi3 = pi2;
	pi2 = 0;
	return 0;
}