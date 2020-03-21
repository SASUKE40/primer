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

const string& shorterString(const string& s1, const string& s2) {
	return s1.size() <= s2.size() ? s1 : s2;
}
int main() {
	return 0;
}