#include <string>
#include <iostream>
#include <vector>
using std::begin;
using std::end;
using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::vector;


int fact(int val) {
	int ret = 1;
	while (val > 1)
		ret *= val--;
	return ret;
}

int main() {
	int j = fact(5);
	cout << "5! is " << j << endl;
	return 0;
}