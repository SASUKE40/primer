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


size_t count_calls() {
	static size_t ctr = 0;
	return ++ctr;
}

int main() {
	for (size_t i = 0; i != 10; ++i)
		cout << count_calls() << endl;
	return 0;
}