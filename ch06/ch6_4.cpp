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

inline const string& shorterString(const string& s1, const string& s2) {
	return s1.size() <= s2.size() ? s1 : s2;
}
string& shorterString(string& s1, string& s2) {
	auto& ret = shorterString(const_cast<const string&>(s1), const_cast<const string&>(s2));
	return const_cast<string&>(ret);
}
int main() {
	return 0;
}