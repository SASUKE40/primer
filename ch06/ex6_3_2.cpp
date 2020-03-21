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


void reset(int& i) {
	i = 0;
}
bool isShorter(const string& s1, const string& s2) {
	return s1.size() < s2.size();
}
string::size_type find_char(const string& s, char c, string::size_type& occurs) {
	auto ret = s.size();
	occurs = 0;
	for (decltype(ret)i = 0; i != s.size(); ++i) {
		if (s[i] == c) {
			if (ret == s.size())
				ret = i;
			++occurs;
		}
	}
	return ret;
}
int main() {
	int i = 2;
	reset(i);
	cout << i << endl;
	return 0;
}