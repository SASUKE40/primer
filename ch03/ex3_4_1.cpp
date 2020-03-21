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
	vector<string> s{ "Hello", "World" };
	for (auto it = s.cbegin(); it != s.cend() && !it->empty(); ++it)
		cout << *it << endl;
	return 0;
}