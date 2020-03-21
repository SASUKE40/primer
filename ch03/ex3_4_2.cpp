#include <string>
#include <iostream>
#include <vector>
using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::vector;
int main() {
	string text = "asdf";
	auto beg = text.begin(),end=text.end();
	auto mid = text.begin() + (end - beg) / 2;
	char sought;
	while (mid != end && *mid != sought) {
		if (sought < *mid)
			end = mid;
		else
			beg = mid + 1;
		mid = beg + (end - beg) / 2;
	}
	return 0;
}