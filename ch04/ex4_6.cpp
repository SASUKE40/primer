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
int main() {
	string s1 = "a string", * p = &s1;
	auto n = s1.size();
	n = (*p).size();
	n = p->size();
	return 0;
}